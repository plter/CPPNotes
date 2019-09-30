cmake_minimum_required(VERSION 3.15)
project(N020ReadJson)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        /usr/local/include
)

add_executable(N020ReadJson main.cpp)