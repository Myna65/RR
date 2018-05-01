cmake_minimum_required(VERSION 3.10)
project(RR CXX)
find_package(PkgConfig)

set(CMAKE_CXX_STANDARD 17)

if ( CMAKE_COMPILER_IS_GNUCC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall")
endif()
if ( MSVC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /W4")
endif()

file(GLOB_RECURSE SOURCE_FILES "*.h" "*.cpp")

add_executable(RR ${SOURCE_FILES})

find_package(OpenGL REQUIRED)
pkg_check_modules(GLEW REQUIRED glew)
pkg_check_modules(GLFW REQUIRED glfw3)
pkg_check_modules(GLM REQUIRED glm)

include_directories(
        ${OPENGL_INCLUDE_DIR}
        ${GLEW_INCLUDE_DIRS}
        ${GLFW_INCLUDE_DIRS}
        ${GLM_INCLUDE_DIRS}
)

target_link_libraries(RR
        ${OPENGL_LIBRARIES}
        ${GLEW_LIBRARIES}
        ${GLFW_LIBRARIES}
)
