cmake_minimum_required(VERSION 3.7)
project(Bana)


set(SOURCE_FILES tests/swimming/swimmingTest.cpp ../src/swimming/Swimmer.h ../src/swimming/Swimmer.cpp ../src/swimming/Championship.cpp ../src/swimming/Championship.h)

add_executable(tests ${SOURCE_FILES} tests/swimming/swimmingTest.cpp ../src/swimming/Swimmer.h ../src/swimming/Swimmer.cpp ../src/swimming/Championship.cpp ../src/swimming/Championship.h)



add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

target_link_libraries(tests gtest gtest_main)