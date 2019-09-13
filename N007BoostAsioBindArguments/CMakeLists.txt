cmake_minimum_required(VERSION 3.10)
project(N007BoostAsioBindArguments)

set(CMAKE_CXX_STANDARD 17)

link_libraries(
        boost_system
)

add_executable(N007BoostAsioBindArguments main.cpp)