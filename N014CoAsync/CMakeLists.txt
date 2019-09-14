cmake_minimum_required(VERSION 3.14)
project(N014CoAsync)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-DBOOST_ASIO_HAS_CO_AWAIT -fcoroutines-ts -stdlib=libc++")

include_directories(
        /usr/local/include
)

add_executable(N014CoAsync main.cpp)