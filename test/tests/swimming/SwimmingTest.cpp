//
// Created by marti on 13/04/2017.
//

#include <gtest/gtest.h>

#include "../../../src/swimming/headers/Swimmer.h"


TEST(Swimmer_Name__Test, Positive) {
    Swimmer swimmer(std::string("Martin"), std::string("Tchokonthe"), FROGSTROKE);
    EXPECT_EQ(std::string("Martin"), swimmer.getName());
}


TEST(Swimmer_Surname__Test, Positive) {
    Swimmer swimmer(std::string("Martin"), std::string("Tchokonthe"), FROGSTROKE);
    EXPECT_EQ(std::string("Tchokonthe"), swimmer.getSurname());
}

TEST(Swimmer_Role__Test, Positive) {
    Swimmer swimmer(std::string("Martin"), std::string("Tchokonthe"), FROGSTROKE);
    EXPECT_EQ(FROGSTROKE, swimmer.getRole());
}


TEST(Swimmer_Equal__Test, Positive) {
    Swimmer swimmer1(std::string("Martin"), std::string("Tchokonthe"), FROGSTROKE);
    Swimmer swimmer2(std::string("Martin"), std::string("Tchokonthe"), FROGSTROKE);
    EXPECT_TRUE(swimmer1 == swimmer2);
}


