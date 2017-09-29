/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/
/*
* File: main.cpp
* Author: agonzalez
*
* Created on September 29, 2017, 12:45 PM
*/
#include <cstdlib>
#include <math.h>
#include <iostream>
using namespace std;
class AdHocSquare {
public:
AdHocSquare(double side){this->side = side;}
void set_side(double side){this->side = side;}
double get_area(){return side*side;}
private:
double side;
};
class LazySquare
{
public:
LazySquare(double side){this->side = side; area = side*side;}
void set_side(double side){side_changed = true; this->side = side;}
double get_area(){if(side_changed == false){return area;}else{return side*side;}}
private:
double side;
double area;
bool side_changed;
};
/*
*
*/
int main(int argc, char** argv) {
AdHocSquare adHocSQ(15);
adHocSQ.set_side(10);
cout << adHocSQ.get_area() << endl;

LazySquare lazySQ(3);
cout << lazySQ.get_area() << endl;

lazySQ.set_side(5);
cout << lazySQ.get_area() << endl;
return 0;
}