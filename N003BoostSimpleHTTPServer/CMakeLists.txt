cmake_minimum_required(VERSION 3.14)
project(N003BoostSimpleHTTPServer)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        /Work/lib/boost_1_70_0
)

add_executable(N003BoostSimpleHTTPServer main.cpp)