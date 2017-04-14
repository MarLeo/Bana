cmake_minimum_required(VERSION 3.7)
project(Bana)

set(SOURCE_FILES swimming/main.cpp swimming/body/Swimmer.cpp swimming/headers/Swimmer.h
        swimming/body/Championship.cpp swimming/headers/Championship.h
        swimming/headers/WinnersQueue.h swimming/body/WinnersQueue.cpp)
add_executable(Bana ${SOURCE_FILES} swimming/body/Swimmer.cpp swimming/headers/Swimmer.h
        swimming/body/Championship.cpp swimming/headers/Championship.h
        swimming/headers/WinnersQueue.h swimming/body/WinnersQueue.cpp)