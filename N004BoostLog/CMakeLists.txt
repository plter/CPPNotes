cmake_minimum_required(VERSION 3.1)
project(N004BoostLog)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -DBOOST_ALL_DYN_LINK)

include_directories(
        /usr/local/include
)

link_directories(
        /usr/local/lib
)

link_libraries(
        pthread
        boost_log
)

add_executable(N004BoostLog main.cpp)