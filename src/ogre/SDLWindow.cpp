#include "SDLWindow.h"

#include <SDL_syswm.h>
#include <SDL_events.h>

#include <OgreRoot.h>
#include <OgreStringConverter.h>

SDLWindow::SDLWindow(const std::string& title, Options options) {

    root = std::make_unique<Ogre::Root>("/home/meynaert/RR/config/plugins.txt","/home/meynaert/RR/config/config.txt","");

    root->setRenderSystem(root->getRenderSystemByName("OpenGL 3+ Rendering Subsystem"));

    root->initialise(false);

    int screen = 0;
    int posX = SDL_WINDOWPOS_CENTERED_DISPLAY(screen);
    int posY = SDL_WINDOWPOS_CENTERED_DISPLAY(screen);

    if(options.fullScreen)
    {
        posX = SDL_WINDOWPOS_UNDEFINED_DISPLAY(screen);
        posY = SDL_WINDOWPOS_UNDEFINED_DISPLAY(screen);
    }

    window = SDL_CreateWindow(
            title.c_str(),
            posX,
            posY,
            options.width,
            options.height,
            SDL_WINDOW_SHOWN | (options.fullScreen ? SDL_WINDOW_FULLSCREEN : SDL_WINDOW_RESIZABLE) );

    SDL_SysWMinfo wmInfo;
    SDL_VERSION( &wmInfo.version );

    SDL_GetWindowWMInfo( window, &wmInfo );

    Ogre::String winHandle;
    Ogre::NameValuePairList params;

    switch( wmInfo.subsystem )
    {
#ifdef WIN32
        case SDL_SYSWM_WINDOWS:
            // Windows code
            winHandle = Ogre::StringConverter::toString( (unsigned long)wmInfo.info.win.window );
            break;
#elif __MACOSX__
        case SDL_SYSWM_COCOA:
            //required to make OGRE play nice with our window
            params.insert( std::make_pair("macAPI", "cocoa") );
            params.insert( std::make_pair("macAPICocoaUseNSView", "true") );

            winHandle  = Ogre::StringConverter::toString(WindowContentViewHandle(wmInfo));
            break;
#else
        case SDL_SYSWM_X11:
            winHandle = Ogre::StringConverter::toString( (unsigned long)wmInfo.info.x11.window );
            break;
#endif
        default:
            OGRE_EXCEPT( Ogre::Exception::ERR_NOT_IMPLEMENTED,
                         "Unexpected WM! (SDL2)",
                         "GraphicsSystem::initialize" );
            break;
    }

    params.insert( std::make_pair("title", title) );
    params.insert( std::make_pair("gamma", "true") );
    params.insert( std::make_pair("FSAA",Ogre::StringConverter::toString( options.fsaa)) );
    params.insert( std::make_pair("vsync", Ogre::StringConverter::toString(options.vSync)) );

#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
    params.insert( std::make_pair("externalWindowHandle",  winHandle) );
#else
    params.insert( std::make_pair("parentWindowHandle",  winHandle) );
#endif

    renderWindow = Ogre::Root::getSingleton().createRenderWindow( title, options.width, options.height, options.fullScreen, &params );


}

SDLWindow::~SDLWindow() {

    root.reset();

    SDL_SetWindowFullscreen( window, 0 );
    SDL_DestroyWindow(window);

}

void SDLWindow::pollEvents() {
    SDL_Event evt;
    while( SDL_PollEvent( &evt ) )
    {
        switch( evt.type )
        {
            case SDL_WINDOWEVENT:
                switch( evt.window.event )
                {
                    /*case SDL_WINDOWEVENT_MAXIMIZED:
                        SDL_SetWindowBordered( window, SDL_FALSE );
                        break;
                    case SDL_WINDOWEVENT_MINIMIZED:
                    case SDL_WINDOWEVENT_RESTORED:
                        SDL_SetWindowBordered( window, SDL_TRUE );
                        break;*/
                    case SDL_WINDOWEVENT_SIZE_CHANGED:
                        int w,h;
                        SDL_GetWindowSize( window, &w, &h );
#if OGRE_PLATFORM == OGRE_PLATFORM_LINUX
                        renderWindow->resize( w, h );
#else
                        renderWindow->windowMovedOrResized();
#endif
                        break;
                    case SDL_WINDOWEVENT_RESIZED:
#if OGRE_PLATFORM == OGRE_PLATFORM_LINUX
                        renderWindow->resize( evt.window.data1, evt.window.data2 );
#else
                        renderWindow->windowMovedOrResized();
#endif
                        break;
                    case SDL_WINDOWEVENT_CLOSE:
                        break;
                    case SDL_WINDOWEVENT_SHOWN:
                        renderWindow->setVisible(true);
                        break;
                    case SDL_WINDOWEVENT_HIDDEN:
                        renderWindow->setVisible(false);
                        break;
                }
                break;
            case SDL_QUIT:
                closed = true;
                break;
            default:
                break;
        }

        //mInputHandler->_handleSdlEvents( evt );
    }
}

bool SDLWindow::isClosed() {
    return closed;
}

bool SDLWindow::isVisible() {
    return renderWindow->isVisible();
}

void SDLWindow::renderOneFrame() {
    root->renderOneFrame();
}
