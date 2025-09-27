#include "Shape_2D.h"
#include <iostream>
#include <string>
using namespace std;
string s2_name;
Shape_2D::Shape_2D(string name) :Shape(name)
{
     s2_name = name;
}
void Shape_2D:: draw()
{

}
void Shape_2D:: info()
{

}
double Shape_2D::calculate_area()
{

}

Shape_2D::~Shape_2D()
{
    //dtor
}
