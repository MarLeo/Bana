//
// Created by marti on 14/04/2017.
//

#ifndef BANA_MULTINATIONAL_H
#define BANA_MULTINATIONAL_H

#include "Product.h"
#include "Seller.h"

#include <list>
#include <algorithm>

class Multinational {

    public:
        Multinational(const std::string& name);
        Multinational(const Multinational& rhs);
        Multinational& operator = (const Multinational& rhs);
        virtual ~Multinational();

        std::string getName() const ;
        const std::list<Seller>& getSellers() const ;
        //const std::list<Product>& getProducts() const ;

        void addSeller(const Seller& seller);

        void setName(const std::string& name);

        // a. get number of sell type product
        int getSellProduct(ProductType type) const ;

        // b. most sell product
        Product getMostSellProduct() const ;

        // c. sort product from the most best sell
        std::list<std::pair<Product, int >> sortProduct();

        // d. sort sellers from the best seller
        std::list<Seller> sortSeller() const ;

        // e. get product and seller with most benefit
        Product getBenefitProduct() const ;
        Seller getBenefitSeller() const ;

    private:
        std::list<Seller> sellers;
        //std::list<Product> products;
        std::string name;

        void copy(const Multinational& rhs);

};


#endif //BANA_MULTINATIONAL_H
