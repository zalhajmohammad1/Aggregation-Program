cmake_minimum_required(VERSION 3.26)
project(Aggregation_Library_)

set(CMAKE_CXX_STANDARD 17)

add_executable(Aggregation_Library_ main.cpp
        Book.cpp
        Book.h
        Library.cpp
        Library.h
        Student.cpp
        Student.h)
