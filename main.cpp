/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on September 27, 2017, 12:52 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class ShopItemOrder{
private:
    string itemName;
    double price;
    unsigned int quantity;
public:
    
    ShopItemOrder(void) 
    {
        
    }
    
    ShopItemOrder(string itemName, double price, unsigned int quantity) 
    {
        itemName = itemName;
        price = price;
        quantity = quantity;
    }
    

    string getName(void){return itemName;}
    void setName(string name){itemName = name;}
    
    double getPrice(void){return price;}
    void setPrice(double price){price = price;}
    
    int getQuantity(void){return quantity;}
    void setQuantity(unsigned int quantity){quantity = quantity;}
    
};

int main(void) {
    double totalPrice = 0;
    ShopItemOrder item1("Apples", 0.69, 2);
    ShopItemOrder item2("Pineapple", 1.99, 15);
    ShopItemOrder item3("Watermelon", 9.99, 5);
    ShopItemOrder vector[] = {item1, item2, item3};
    cout << " Item Name   Quantity   Price" << endl;
    for(ShopItemOrder loop: vector)
    {
        cout << "  " << loop.getName();
        cout << "        ";
        cout << loop.getQuantity();
        cout << "        ";
        cout << loop.getPrice() << endl;
        totalPrice += loop.getPrice() * loop.getQuantity();
    }
    cout << endl;
    cout << "Your total is: " << totalPrice;
    cout << endl;
    return 0;
}