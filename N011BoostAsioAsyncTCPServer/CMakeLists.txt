cmake_minimum_required(VERSION 3.10)
project(N011BoostAsioAsyncTCPServer)

set(CMAKE_CXX_STANDARD 17)

link_libraries(
        boost_system
)

add_executable(
        N011BoostAsioAsyncTCPServer
        main.cpp
        tcp_server.cpp
        tcp_connection.cpp
)