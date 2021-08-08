cmake_minimum_required(VERSION 3.17)

project(HELLO_VS_CODE VERSION 1.0.0)

include_directories(../../eigen-3.3.9)
include_directories(../../eigen-3.3.9/src)

add_executable(HELLO_VS_CODE main.cxx)

