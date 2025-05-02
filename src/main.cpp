#include "ProductManager.h"

int main()
{
    auto products = 
        ProductManager::createProducts(); 
        for(const auto& product : products)
        {
            product-> display(); 
            cout <<
            "-------------------------------------\n"; 
        }

        return 0; 
}