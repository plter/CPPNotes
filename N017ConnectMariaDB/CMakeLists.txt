cmake_minimum_required(VERSION 3.14)
project(N017ConnectMariaDB C)

set(CMAKE_C_STANDARD 11)

include_directories(
        /usr/local/include/mariadb
)

link_directories(
        /usr/local/lib/mariadb
)

link_libraries(
        mariadb
)

add_executable(N017ConnectMariaDB main.c)