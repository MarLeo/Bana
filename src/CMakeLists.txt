cmake_minimum_required(VERSION 3.7)
project(Bana)

set(SOURCE_FILES swimming/main.cpp swimming/Swimmer.cpp swimming/Swimmer.h swimming/Championship.cpp swimming/Championship.h)
add_executable(Bana ${SOURCE_FILES} swimming/Swimmer.cpp swimming/Swimmer.h swimming/Championship.cpp swimming/Championship.h)