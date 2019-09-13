cmake_minimum_required(VERSION 3.10)
project(N006BoostAsioAsyncTimer)

set(CMAKE_CXX_STANDARD 17)

link_libraries(
        boost_system
)

add_executable(N006BoostAsioAsyncTimer main.cpp)