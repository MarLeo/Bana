//
// Created by marti on 14/04/2017.
//

#include "../headers/Swimmer.h"
#include "../headers/Championship.h"
#include "../headers/WinnersQueue.h"

#include <cassert>
#include <algorithm>

WinnersQueue::WinnersQueue(const Championship &_championship)
 : championship(_championship){
    swimmers = std::list<Swimmer>();
}

void WinnersQueue::push(const Swimmer &swimmer) {

    std::find_if(swimmers.begin(), swimmers.end(), [](Swimmer s)->void {
        if(numWinnings(swimmer) > numWinnings(s)) {
            //swimmers.insert(swimmers.size(), swimmer);
        }
    });

    swimmers.push_back(swimmer);
}

Swimmer WinnersQueue::pop() {

    assert(!isEmpty());
    Swimmer swimmer = swimmers.front();
    swimmers.pop_front();
    return swimmer;
}

int WinnersQueue::size() const {
    return swimmers.size();
}

bool WinnersQueue::isEmpty() const {
    return swimmers.empty();
}

int WinnersQueue::numWinnings(const Swimmer &swimmer) const {
    int count = 0;

    for (int i = 0; i < 4; i++) {
        Role role = (Role) i;
        std::list<Swimmer>& s1 = championship.getClassification(role);
        Swimmer swimmer1 = *s1.begin();
        if (swimmer1.getName() == swimmer.getName()
                && swimmer1.getSurname() == swimmer.getSurname())
            count++;
    }
    return count;
}



