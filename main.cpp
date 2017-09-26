/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on September 25, 2017, 2:11 PM
 */
class AdHocSquare 
{
public:
AdHocSquare(double side); void set_side(double side); double get_area();
private:
double side;
};

class LazySquare {
public:
AdHocSquare(double side); void set_side(double side); double get_area();
private: 
    double side;
    double area;
    bool side_changed;
};   

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

