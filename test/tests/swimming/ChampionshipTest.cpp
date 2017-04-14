//
// Created by marti on 14/04/2017.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../../../src/swimming/headers/Championship.h"


TEST(Championship_Name__Test, Positive) {
    Championship championship(std::string("Kondengui first swimming championship"));
    EXPECT_EQ(std::string("Kondengui first swimming championship"), championship.getName());
}

TEST(Championship_PlayersClassification__Test, Positive) {
    Championship championship(std::string("Kondengui first swimming championship"));
    Swimmer swimmer1(std::string("Martin"), std::string("Tchokonthe"), FROGSTROKE);
    Swimmer swimmer2(std::string("Emma"), std::string("Tchokonthe"), BUTTERFLYSTROKE);

    championship.addPlayer(swimmer1);
    championship.addPlayer(swimmer2);

    std::list<Swimmer>& result = championship.getClassification(FROGSTROKE);
    std::for_each(result.begin(), result.end(), [&](Swimmer swimmer) {
        EXPECT_TRUE(swimmer1 == swimmer);
    });
}

TEST(Championship_Players__Test, Positive) {
    Championship championship(std::string("Kondengui first swimming championship"));
    Swimmer swimmer1(std::string("Martin"), std::string("Tchokonthe"), FROGSTROKE);
    Swimmer swimmer2(std::string("Emma"), std::string("Tchokonthe"), BUTTERFLYSTROKE);

    std::list<Swimmer> players;
    players.push_back(swimmer1);
    players.push_back(swimmer2);

    championship.addPlayer(swimmer1);
    championship.addPlayer(swimmer2);

    std::list<Swimmer> result = championship.getPlayers();

    //EXPECT_EQ(players, ::testing::Contains(result));
}