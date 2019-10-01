cmake_minimum_required(VERSION 3.15)
project(N021BoostRegExp)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        /usr/local/include
)

link_directories(
        /usr/local/lib
)

link_libraries(
        boost_regex
)

add_executable(N021BoostRegExp main.cpp)