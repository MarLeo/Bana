//
// Created by marti on 14/04/2017.
//

#ifndef BANA_SELLER_H
#define BANA_SELLER_H

#include "Product.h"

#include <sstream>
#include <list>

class Seller {

    public:
        Seller(const std::string& _business_name, const std::string&_address);
        Seller(const Seller& rhs);
        Seller& operator = (const Seller& rhs);
        virtual ~Seller();

        std::string getBusinessName() const ;
        std::string getAddress() const ;
        void addProduct(const Product& product);
        std::list<Product>& getProducts() const ;

        void setBusinessName(std::string _business_name);
        void setAddress(std::string _address);
        void setProducts(std::list<Product> products);

    private:
        std::string business_name;
        std::string address;
        std::list<Product> products;

        void copy(const Seller& rhs);

};


#endif //BANA_SELLER_H
