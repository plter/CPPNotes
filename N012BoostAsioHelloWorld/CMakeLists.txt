cmake_minimum_required(VERSION 3.10)
project(N012BoostAsioHelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -DBOOST_ALL_DYN_LINK)

link_libraries(
        boost_system
        pthread
        boost_log
)

add_executable(N012BoostAsioHelloWorld main.cpp)