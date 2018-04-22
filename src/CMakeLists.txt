cmake_minimum_required(VERSION 3.10)
project(RR CXX)

set(CMAKE_CXX_STANDARD 17)

if ( CMAKE_COMPILER_IS_GNUCC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall")
endif()
if ( MSVC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /W4")
endif()

file(GLOB SOURCE_FILES "*.h" "*.cpp" "**/*.h" "**/*.cpp" "**/**/*.h" "**/**/*.cpp")

include_directories(/usr/local/include/OGRE/)
include_directories(/usr/include/SDL2/)

add_executable(RR ${SOURCE_FILES})
target_link_libraries(RR /usr/local/lib/libOgreMain.so)
target_link_libraries(RR /usr/lib/libSDL2.so)