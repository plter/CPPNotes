cmake_minimum_required(VERSION 3.10)
project(N012AsioEchoServer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-DBOOST_ASIO_HAS_CO_AWAIT -fcoroutines-ts -stdlib=libc++")

include_directories(
        /usr/local/include
)

link_libraries(
        pthread
)

add_executable(N012AsioEchoServer main.cpp)