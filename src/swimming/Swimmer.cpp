//
// Created by marti on 13/04/2017.
//

#include "Swimmer.h"
#include <sstream>

Swimmer::Swimmer(const std::string& _name, const std::string& _surname, const Role& _role)
 : name(_name), surname(_surname), role(_role) {}

Swimmer::Swimmer(const Swimmer &rhs) {
    copy(rhs);
}


Swimmer &Swimmer::operator=(const Swimmer &rhs) {
    if (this == &rhs) return *this;
        copy(rhs);
    return *this;
}




Swimmer::~Swimmer() {}

void Swimmer::copy(const Swimmer &rhs) {
    name = rhs.getName();
    surname = rhs.getSurname();
    role = rhs.getRole();

    /*Swimmer tmp(rhs);
    std::swap(name, tmp.name);
    std::swap(surname, tmp.surname);
    std::swap(role, tmp.role);
     */

}

Role Swimmer::getRole() const {
    return role;
}

std::string Swimmer::getName() const {
    return std::string(name);
}

std::string Swimmer::getSurname() const {
    return std::__cxx11::string(surname);
}

bool Swimmer::operator==(const Swimmer &rhs) {
    if (this == &rhs) return true;
    return false;
}



