#include <iostream>

#include "headers/Swimmer.h"
#include "headers/Championship.h"

#include <sstream>
#include <algorithm>

int main() {

    Championship championship(std::string("Kondengui first swimming championship"));
    Swimmer swimmer1(std::string("Martin"), std::string("Tchokonthe"), FROGSTROKE);
    Swimmer swimmer2(std::string("Emma"), std::string("Tchokonthe"), BUTTERFLYSTROKE);

    championship.addPlayer(swimmer1);
    championship.addPlayer(swimmer2);

    // get name of the championship
    std::cout << "The championship name is : " << championship.getName() << std::endl;


    std::list<Swimmer>& result = championship.getClassification(FROGSTROKE);
    std::cout << "List of players with role " << FROGSTROKE << std::endl;
    std::for_each(result.begin(), result.end(), [&](Swimmer s) {
        s.print();
    });


    std::list<Swimmer> players = championship.getPlayers();
    std::cout << "List of all players " << std::endl;
    std::for_each(players.begin(), players.end(), [&](Swimmer s) {
        s.print();
    });




    return 0;
}