//
// Created by marti on 14/04/2017.
//

#include <algorithm>
#include "../headers/Seller.h"

Seller::Seller(const std::string &_business_name, const std::string &_address)
: business_name(_business_name), address(_address) {
    products = std::list<Product>();
}

Seller::Seller(const Seller &rhs) { copy(rhs); }

Seller &Seller::operator=(const Seller &rhs) {
    if (this == &rhs) return *this;
        copy(rhs);
    return *this;
}

Seller::~Seller() {}

void Seller::copy(const Seller &rhs) {
    business_name = rhs.getBusinessName();
    address = rhs.getAddress();
    products = rhs.getProducts();
    /*Seller tmp(rhs);
    std::swap(business_name, rhs.business_name);
    std::swap(address, rhs.address);
    std::swap(products, rhs.products);
     */
}

std::string Seller::getBusinessName() const {
    return std::__cxx11::string(business_name);
}

std::string Seller::getAddress() const {
    return std::__cxx11::string(address);
}

void Seller::addProduct(const Product& product) {
    products.push_back(product);
}

std::list<Product>& Seller::getProducts() const {
    std::list<Product>* list = new std::list<Product>();
    std::copy(products.begin(), products.end(), std::back_inserter(*list));
    return *list;
}

void Seller::setBusinessName(std::string _business_name) {
    this->business_name = _business_name;
}

void Seller::setAddress(std::string _address) {
    this->address = _address;
}

void Seller::setProducts(std::list<Product> products) {
    this->products = products;
}


