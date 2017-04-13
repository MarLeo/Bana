#include <iostream>

#include "Swimmer.h"
#include "Championship.h"

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

    std::for_each(result.begin(), result.end(), [](Swimmer s) {
        std::cout << "Name: " << s.getName() << " Surname : " << s.getSurname() << " Role : " << s.getRole() << std::endl;
    });

    return 0;
}