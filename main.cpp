/*
<<<<<<< HEAD
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/
/*
* File: main.cpp
* Author: agonzalez
*
* Created on September 25, 2017, 2:11 PM
*/
#include <cstdlib>
#include <math.h>
#include <iostream>

using namespace std;

class AdHocSquare 
{
private:
double sSide;
public:
AdHocSquare(double side){side = sSide;}
    void set_side(double side){
        side = sSide;
    }
    double get_area(){
        return sSide*sSide;
    }
};

class LazySquare
{
private:
double sSide;
double sArea;
bool side_changed;

public:
LazySquare(double side){
    sSide = side; 
    sArea = sSide*sSide;
}
void set_side(double side){
    side_changed = true; 
    sSide = side;}
    double get_area(){if(side_changed == false)
    {
    return sArea;
    }

else{
return sSide*sSide;
}
    
}

};

int main(int argc, char** argv) 
{


AdHocSquare adHocSQ(15);
adHocSQ.set_side(10);
cout << adHocSQ.get_area() << endl;

LazySquare lazySQ(3);
cout << lazySQ.get_area() << endl;

lazySQ.set_side(5);
cout << lazySQ.get_area() << endl;
return 0;
}