//
// Created by marti on 14/04/2017.
//

#include "../headers/Multinational.h"

Multinational::Multinational(const std::string &name) : name(name) {
    sellers = std::list<Seller>();
    //products = std::list<Product>();
}

Multinational::Multinational(const Multinational &rhs) { copy(rhs); }

Multinational &Multinational::operator=(const Multinational &rhs) {
    if (this == &rhs) return *this;
        copy(rhs);
    return *this;
}

Multinational::~Multinational() {}

void Multinational::copy(const Multinational &rhs) {
    name = rhs.getName();
    sellers = rhs.getSellers();
   // products = rhs.getProducts();
}

std::string Multinational::getName() const {
    return std::__cxx11::string(name);
}


void Multinational::addSeller(const Seller& seller) {
    sellers.push_back(seller);
}

const std::list<Seller>& Multinational::getSellers() const {
    std::list<Seller>* list = new std::list<Seller>();
    std::copy(sellers.begin(), sellers.end(), std::back_inserter(*list));
    return *list;
}

/*const std::list<Product> &Multinational::getProducts() const {
    return products;
}*/



void Multinational::setName(const std::string &name) {
    this->name = name;
}

int Multinational::getSellProduct(ProductType type) const {
    int count = 0;
    std::for_each(sellers.begin(), sellers.end(), [&type, &count](const Seller& seller) {
        std::list<Product>& list = seller.getProducts();
        std::for_each(list.begin(), list.end(), [&type, &count](const Product& product) {
            if (product.getType() == type) count++;
       /* for(auto p : seller.getProducts()) {
            if (p.getType() == type)
                count++;
        }*/
        });
    });
    return count;
}

/*
Product Multinational::getMostSellProduct() const {
    Product result = nullptr;
    int max = 0;
    int count = 0;
    std::pair<Product, int> list;
    std::map<Product, int> map;

    for (auto type : pairs) {
        std::for_each(sellers.begin(), sellers.end(), [](Seller seller) {
            std::find_if(seller.getProducts().begin(), seller.getProducts().end(), [](Product product)->void {
                if (product.getType() == type.first) {
                    for (auto &p : map) {
                        if ((product.operator!=(p.first))) {
                            list = std::make_pair(product, 1);
                            map.insert(list);
                        } else {
                            list = std::make_pair(product, p.second++);
                            map.insert(list);
                        }
                    }

                }
            });
        });
    }

    for (auto product : map) {
        if (product.second > max) {
            result = product.first;
        }
    }

    return result;
}

std::list<std::pair<Product, int >> Multinational::sortProduct() {

    std::list<std::pair<Product, int >> result;
    std::pair<Product, int> list;
    std::map<Product, int> map;
    int count = 0;
    for (auto type : pairs) {
        std::for_each(sellers.begin(), sellers.end(), [](Seller seller) {
            std::find_if(seller.getProducts().begin(), seller.getProducts().end(), [](Product product)->void {
                if (product.getType() == type.first) {
                    //count++;
                    //result.push_back(std::make_pair(product, count++));
                    for (auto &p : map) {
                        if ((product.operator!=(p.first))) {
                            list = std::make_pair(product, 1);
                            map.insert(list);
                        } else {
                            list = std::make_pair(product, p.second++);
                            map.insert(list);
                        }
                        result.push_back(list);
                    }
                }
            });
        });
    }

    result.sort([](const std::pair<Product, int>& a, const std::pair<Product, int>& b) {
        return a.second > b.second;
    });

    return result;
}

*/








