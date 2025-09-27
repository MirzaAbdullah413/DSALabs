#include "Shape.h"
#include <iostream>
#include <string>
using namespace std;

//making the base class "Shape"
Shape::Shape(string name)
{
    this->name = name;
}
//making the draw method
 void Shape:: draw()
{

}
//making the info method
 void Shape::info()
{

}
//making the get_name method
string Shape::get_name()
{
    return name;
}
//Destructor
Shape::~Shape()
{

}
