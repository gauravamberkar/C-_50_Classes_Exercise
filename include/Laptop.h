#pragma once
#include "Product.h"

class Laptop : public Product {
    private: 
        string series;
        string colour; 
        string display_size; 
        string resolution; 
        string model_number; 
        string processor_brand; 
        string processor_type; 
        string processor_speed; 
        int processor_count; 
        string ram_size; 
        int no_of_usb2_ports; 
        int no_of_usb3_ports; 
        string os; 
        int no_of_lithium_batteries; 
        float item_weight; 

    public:
        Laptop(const string& name,
                const string& brand,
                double price, 
                double rating, 
                const string& series, 
                const string& colour, 
                const string& display_size, 
                const string& resolution, 
                const string& model_number, 
                const string& processor_brand, 
                const string& processor_type, 
                const string& processor_speed, 
                int processor_count, 
                const string& ram_size, 
                int no_of_usb2_ports, 
                int no_of_usb3_ports, 
                const string& os,
                int no_of_lithium_batteries, 
                float item_weight) 

                : Product(name, brand, price, rating),
                  series(series), colour(colour), display_size(display_size), 
                    resolution(resolution), model_number(model_number),
                    processor_brand(processor_brand), processor_type(processor_type), 
                    processor_speed(processor_speed), processor_count(processor_count), 
                    ram_size(ram_size), no_of_usb2_ports(no_of_usb2_ports), 
                    no_of_usb3_ports(no_of_usb3_ports), os(os), 
                    no_of_lithium_batteries(no_of_lithium_batteries), item_weight(item_weight) {}
                    
        void display() const override {
            Product::display(); 
            cout << "Series: " << series << "\nColour: " << colour 
            << "\nDisplay Size: " << display_size << "\nDisplay Resolution: " << resolution
            << "\nModel Number: " << model_number << "\nProcessor Brand: " 
            << processor_brand << "\nProcessor Type: " << processor_type <<
            "\nProcessor Speed: " << processor_speed << "\n Ram Size: " << ram_size
            << "\nNumber of USB2.0 Ports: " << no_of_usb2_ports << "\nNumber of USB3.0 Ports: "
            << no_of_usb3_ports << "\nOperating System: " << os << "\nNumber of Lithium Batteries: " 
            << no_of_lithium_batteries << "\nItem Weight: " << item_weight; 
        }
};

