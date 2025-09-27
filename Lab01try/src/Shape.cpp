#include "Shape.h"
#include <iostream>
#include <string>
using namespace std;

Shape::Shape(string name)
{
    this->name = name;
}

 void Shape:: draw()
{

}
 void Shape::info()
{

}

string Shape::get_name()
{
    return name;
}
Shape::~Shape()
{

}
