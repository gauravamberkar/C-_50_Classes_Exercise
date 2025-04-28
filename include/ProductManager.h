#pragma once 
#include "Product.h"
#include "Laptop.h"
#include <vector>
#include <memory>

using std::vector;
using std::unique_ptr; 

class ProductManager {
    public:
        static vector<unique_ptr<Product>>createProducts(); 
};