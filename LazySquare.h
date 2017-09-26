/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LazySquare.h
 * Author: agonzalez
 *
 * Created on September 25, 2017, 2:20 PM
 */

#ifndef LAZYSQUARE_H
#define LAZYSQUARE_H

class LazySquare {
public:
AdHocSquare(double side); 
void set_side(double side); 
double get_area();
private: 

double side;
double area;
bool side_changed;


};

#endif /* LAZYSQUARE_H */

