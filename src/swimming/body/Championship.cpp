//
// Created by marti on 13/04/2017.
//

#include <algorithm>
#include "../headers/Championship.h"

Championship::Championship(const std::string &_name)
 : name(_name) {}

Championship::Championship(const Championship &rhs) { copy(rhs); }

Championship &Championship::operator=(const Championship &rhs) {
    if (this == &rhs) return *this;
        copy(rhs);
    return *this;
}

Championship::~Championship() {}

void Championship::copy(const Championship &rhs) {
    name = rhs.getName();
    players = rhs.getPlayers();
}

std::string Championship::getName() const {
    return std::string(name);
}

std::list<Swimmer> & Championship::getClassification(const Role &role) const {
    std::list<Swimmer>* result = new std::list<Swimmer>();
    /*for (std::list<Swimmer>::const_iterator iterator = players.begin(); iterator!=players.end(); iterator++) {
        if (iterator->getRole() == role)
            result->push_back(*iterator);
    }

    std::for_each(players.begin(), players.end(), [](Swimmer* s) {
        std::find_if(s->getRole(), role, []()-> bool { return s->getRole() == role; });
    });
     */
    std::copy_if(players.begin(), players.end(), std::back_inserter(*result), [&](Swimmer s) {
        return role == s.getRole();
    });

    return *result;
}

std::list<Swimmer> Championship::getPlayers() const {
    return players;
}

void Championship::addPlayer(Swimmer player) {
    players.push_back(player);
}









