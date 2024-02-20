cmake_minimum_required(VERSION 3.0)

project(staticglobal)

add_executable(staticglobal main.cpp)

install(TARGETS staticglobal RUNTIME DESTINATION bin)
