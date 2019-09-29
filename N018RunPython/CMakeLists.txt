cmake_minimum_required(VERSION 3.14)
project(HelloCpp)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        /Library/Frameworks/Python.framework/Versions/3.7/Headers
)

link_directories(
        /Library/Frameworks/Python.framework/Versions/3.7/lib
)

link_libraries(
        python3.7
)

add_executable(RunPython main.c)