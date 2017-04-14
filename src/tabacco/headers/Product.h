//
// Created by marti on 14/04/2017.
//

#ifndef BANA_PRODUCT_H
#define BANA_PRODUCT_H

#include <sstream>

enum ProductType {CIGARETTE, CIGARILLOS, CIGARS, TOBACCO};
/*std::pair<ProductType, std::string> pairs[] = {
        std::pair<ProductType, std::string>(CIGARETTE, "Cigarette"),
        std::pair<ProductType, std::string>(CIGARILLOS, "Cigarillos"),
        std::pair<ProductType, std::string>(CIGARS, "Cigars"),
        std::pair<ProductType, std::string>(TOBACCO, "Tobacco")
};
*/

class Product {

    public:

        Product(const std::string& _name, const std::string& _description, const double& _price, const ProductType& _type);
        Product(const Product& rhs);
        Product& operator= (const Product& rhs);
        virtual ~Product();

        std::string getName() const ; // the function cannot modified the name, that the reason of the const after a function name
        std::string getDescription() const ;
        double getPrice() const ;
        ProductType getType() const ;

        void setName(const std::string& name);
        void setDescription(const std::string& description);
        void setPrice(const double& price);
        void setType(const ProductType& type);

        bool operator== (const Product& rhs);
        bool operator!= (const Product& rhs);


    private:
        std::string name;
        std::string description;
        double price;
        ProductType type;

        void copy(const Product& rhs); // for D.R.Y pattern

};


#endif //BANA_PRODUCT_H
