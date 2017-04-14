//
// Created by marti on 14/04/2017.
//

#ifndef BANA_WINNERSQUEUE_H
#define BANA_WINNERSQUEUE_H

#include "Swimmer.h"
#include "Championship.h"
#include <list>

class WinnersQueue : private std::list<Swimmer> {

    public:
        WinnersQueue(const Championship& _championship);

        void push(const Swimmer& swimmer);
        Swimmer pop();

        int size() const ;
        bool isEmpty() const ;

    private:
        Championship championship;
        std::list<Swimmer> swimmers;
        int numWinnings(const Swimmer& swimmer) const ;

};

#endif //BANA_WINNERSQUEUE_H
