cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        Console.cpp
        Console.h
        Data.cpp
        Data.h
        Line.cpp
        Line.h
        Manager.cpp
        Manager.h
        Symbol.cpp
        Symbol.h
        Validation.cpp
        Validation.h)