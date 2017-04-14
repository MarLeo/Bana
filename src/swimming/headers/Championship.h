//
// Created by marti on 13/04/2017.
//

#ifndef BANA_CHAMPIONSHIP_H
#define BANA_CHAMPIONSHIP_H

#include <iostream>
#include <list>

#include "Swimmer.h"

class Championship {

    public:
        Championship(const std::string& _name);
        Championship(const Championship& rhs); // copy constructor
        Championship& operator= (const Championship& rhs); // assignment operator
        virtual ~Championship();

        std::string getName() const ;
        void addPlayer(Swimmer player);
        std::list<Swimmer> getPlayers() const ;
        std::list<Swimmer> & getClassification(const Role& role) const;


    private:
        std::string name;
        std::list<Swimmer> players;

        void copy(const Championship& rhs); // for D.R.Y pattern

};


#endif //BANA_CHAMPIONSHIP_H
