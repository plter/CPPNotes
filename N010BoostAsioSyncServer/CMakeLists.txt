cmake_minimum_required(VERSION 3.10)
project(N010BoostAsioSyncServer)

set(CMAKE_CXX_STANDARD 17)

link_libraries(
        boost_system
)

add_executable(N010BoostAsioSyncServer main.cpp)