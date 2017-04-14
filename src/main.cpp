#include <iostream>


#include "swimming/headers/Championship.h"
#include "tabacco/headers/Multinational.h"

int main(int argc, const char* argv[]) {

/*
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
*/


    Product product1("BH", "trés bon", 20.0, CIGARS);
    Product product2("Malboro", "exquis", 30.0, CIGARS);

    Seller seller1("seller1", "13, Avenue Jean Jaures");
    seller1.addProduct(product1);
    seller1.addProduct(product2);

    Multinational multinational("british tobacco");
    multinational.addSeller(seller1);

    int num = multinational.getSellProduct(CIGARS);

    std::cout << "Number of product of type " << CIGARS << num  << std::endl;

    return 0;
}