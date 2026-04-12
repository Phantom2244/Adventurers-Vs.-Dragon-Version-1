cmake_minimum_required(VERSION 4.0)
project(GitHub Repo for Career Prep)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(M3OEP_lasness
        Adventurer.cpp
        Adventurer.h
        Dragon.cpp
        Dragon.h
        Knight.cpp
        Knight.h
        Mage.cpp
        Mage.h
        main.cpp
        Rogue.cpp
        Rogue.h)
