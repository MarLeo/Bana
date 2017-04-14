//
// Created by marti on 13/04/2017.
//

#ifndef BANA_SWIMMER_H
#define BANA_SWIMMER_H

#include <iostream>

enum Role {STYLE = 0, FROGSTROKE, BUTTERFLYSTROKE, PLUNGE};

class Swimmer {

    public:

        Swimmer(const std::string& _name, const std::string& _surname, const Role& _role);
        Swimmer(const Swimmer& rhs); // copy constructor
        Swimmer& operator=(const Swimmer& rhs); // assignment operator
        virtual ~Swimmer();

        Role getRole() const ;
        std::string getName() const ;
        std::string getSurname() const ;
        bool operator== (const Swimmer& rhs);
        void print();

    private:
        std::string name;
        std::string surname;
        Role role;

        void copy(const Swimmer& rhs); // for copy constructor



};


#endif //BANA_SWIMMER_H
