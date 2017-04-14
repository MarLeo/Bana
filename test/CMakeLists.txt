cmake_minimum_required(VERSION 3.7)
project(Bana)


set(SOURCE_FILES tests/swimming/SwimmingTest.cpp ../src/swimming/headers/Swimmer.h ../src/swimming/body/Swimmer.cpp
        ../src/swimming/body/Championship.cpp ../src/swimming/headers/Championship.h main.cpp tests/swimming/ChampionshipTest.cpp
        ../src/swimming/headers/WinnersQueue.h ../src/swimming/body/WinnersQueue.cpp
        ../src/tabacco/body/Product.cpp ../src/tabacco/headers/Product.h ../src/tabacco/body/Seller.cpp ../src/tabacco/headers/Seller.h ../src/tabacco/body/Multinational.cpp ../src/tabacco/headers/Multinational.h)

add_executable(tests ${SOURCE_FILES} tests/swimming/SwimmingTest.cpp
        ../src/swimming/headers/Swimmer.h ../src/swimming/body/Swimmer.cpp
        ../src/swimming/body/Championship.cpp ../src/swimming/headers/Championship.h
        main.cpp tests/swimming/ChampionshipTest.cpp
        ../src/swimming/headers/WinnersQueue.h ../src/swimming/body/WinnersQueue.cpp
        ../src/tabacco/body/Product.cpp ../src/tabacco/headers/Product.h ../src/tabacco/body/Seller.cpp ../src/tabacco/headers/Seller.h ../src/tabacco/body/Multinational.cpp ../src/tabacco/headers/Multinational.h)



add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

target_link_libraries(tests gtest gtest_main)