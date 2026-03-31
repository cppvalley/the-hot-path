cmake_minimum_required(VERSION 3.20)
project(the-hot-path CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS_RELEASE "-O2 -g -fno-omit-frame-pointer")

find_package(Threads REQUIRED)

add_subdirectory(src)
add_subdirectory(benchmarks)
