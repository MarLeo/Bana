cmake_minimum_required(VERSION 3.7)
project(Bana)

set(SOURCE_FILES main.cpp swimming/body/Swimmer.cpp swimming/headers/Swimmer.h
        swimming/body/Championship.cpp swimming/headers/Championship.h
        swimming/headers/WinnersQueue.h swimming/body/WinnersQueue.cpp
        tabacco/body/Product.cpp tabacco/headers/Product.h tabacco/body/Seller.cpp tabacco/headers/Seller.h tabacco/body/Multinational.cpp tabacco/headers/Multinational.h)
add_executable(Bana ${SOURCE_FILES} main.cpp swimming/body/Swimmer.cpp swimming/headers/Swimmer.h
        swimming/body/Championship.cpp swimming/headers/Championship.h
        swimming/headers/WinnersQueue.h swimming/body/WinnersQueue.cpp
        tabacco/body/Product.cpp tabacco/headers/Product.h tabacco/body/Seller.cpp tabacco/headers/Seller.h tabacco/body/Multinational.cpp tabacco/headers/Multinational.h)