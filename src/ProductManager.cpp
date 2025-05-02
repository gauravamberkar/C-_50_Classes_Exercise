#pragma once 
#include "Product.h"
#include "Laptop.h"
#include <vector>
#include <memory>

using std::vector;
using std::unique_ptr; 
using std::make_unique;
class ProductManager {
    public:
        static vector<unique_ptr<Product>>createProducts()
        {
            vector<unique_ptr<Product>> products; 

            products.push_back(make_unique<Laptop>("Macbook Pro 14", "Apple", "99999INR", "4.4", "13-inch MacBook Air (M4, 2025)",
                                                    "Silver", "13.6Inches", "2560 x 1664 Pixels", "MW0W3HN/A", 
                                                "Apple", "Apple M4", "0.01GHZ",10,"24GB",2,2,"MacOS",4,1.240));

            return products;
        } 

        
        
};