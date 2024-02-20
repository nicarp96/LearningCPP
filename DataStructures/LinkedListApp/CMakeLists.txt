cmake_minimum_required(VERSION 3.28)
project(LinkedListApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(LinkedListApp main.cpp
        List.h
        LinkedList.h)
