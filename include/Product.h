#include <iostream>
#include <string>

using std::cout; 
using std::endl; 
using std::string; 


class Product 
{
    protected: 
        string name; 
        string brand; 
        double price; 
        double rating; 

    public: 
        Product(const string& name, const string& brand, double price, double rating)
            : name(name), brand(brand), price(price), rating(rating) {}
        
        virtual ~Product() = default; 

        virtual void display() const {
            cout << "Product: " << name << "\nBrand: " << brand << "\nPrice: " << price 
                            << "\nRating: " << rating; 
        }
};

