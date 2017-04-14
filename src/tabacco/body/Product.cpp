//
// Created by marti on 14/04/2017.
//

#include "../headers/Product.h"

Product::Product(const std::string &_name, const std::string &_description, const double &_price,
                 const ProductType &_type)
: name(_name), description(_description), price(_price), type(_type){}

Product::Product(const Product &rhs) { copy(rhs); }

Product &Product::operator=(const Product &rhs) {
    if (this == &rhs) return *this;
    copy(rhs);
    return *this;
}

void Product::copy(const Product &rhs) {
    name = rhs.getName();
    description = rhs.getDescription();
    price = rhs.getPrice();
    type = rhs.getType();
   /* Product tmp(rhs);
    std::swap(name, rhs.name);
    std::swap(description, rhs.description);
    std::swap(price, rhs.price);
    std::swap(type, rhs.type);
    */
}

std::string Product::getName() const {
    return std::__cxx11::string(name);
}

std::string Product::getDescription() const {
    return std::__cxx11::string(description);
}

double Product::getPrice() const {
    return price;
}

ProductType Product::getType() const {
    return type;
}

void Product::setName(const std::string &name) {
    this->name = name;
}

void Product::setDescription(const std::string &description) {
    this->description = description;
}

void Product::setPrice(const double &price) {
    this->price = price;
}

void Product::setType(const ProductType &type) {
    this->type = type;
}

Product::~Product() {}

bool Product::operator==(const Product &rhs) {
    return this->name == rhs.name && this->description == rhs.description
                && this->price == rhs.price && this->type == rhs.type;
}

bool Product::operator!=(const Product &rhs) {
    return this->name != rhs.name || this->description != rhs.description
           && this->price != rhs.price || this->type != rhs.type;
}



