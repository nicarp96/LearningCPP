cmake_minimum_required(VERSION 3.0)

project(recursivetest)

add_executable(recursivetest main.cpp)

install(TARGETS recursivetest RUNTIME DESTINATION bin)
