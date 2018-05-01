#include <iostream>
#include <memory>
#include <cstring>
#include <chrono>
#include <thread>

#include "opengl/Application.h"

int main() {
    try {

        Application application = Application("Title");

        auto time = std::chrono::system_clock::now();
        while(application.running()) {
            auto old = time;
            time = std::chrono::system_clock::now();
            application.renderFrame(time - old);
        }

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}