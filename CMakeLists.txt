cmake_minimum_required(VERSION 4.0)
project(GitHubRepoForCareerPrep)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GitHubRepoForCareerPrep
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
        Rogue.h
)
