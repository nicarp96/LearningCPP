cmake_minimum_required(VERSION 3.28)
project(ArrayStackApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(ArrayStackApp main.cpp
        Stack.h
        ArrayStack.h)
