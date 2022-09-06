cmake_minimum_required(VERSION 3.0)
project(test)
find_package(GTest REQUIRED)
# file(GLOB "src/*.cpp")
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} gtest pthread)