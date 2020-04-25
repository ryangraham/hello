cmake_minimum_required(VERSION 3.12)
project(cli LANGUAGES CXX)

find_package(hello CONFIG REQUIRED)
message("hello_DIR: ${hello_DIR}")
message("hello_INCLUDE_DIR: ${hello_INCLUDE_DIR}")
include_directories(${hello_INCLUDE_DIR})

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} hello::hello)

add_custom_target(run
    COMMAND cli
    DEPENDS cli
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)
