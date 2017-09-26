/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AdHocSquare.h
 * Author: agonzalez
 *
 * Created on September 25, 2017, 2:18 PM
 */

#ifndef ADHOCSQUARE_H
#define ADHOCSQUARE_H

class AdHocSquare {
public:
AdHocSquare(double side); 
void set_side(double side); 
double get_area();

private:
    
double side;
};

#endif /* ADHOCSQUARE_H */

