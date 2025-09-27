#include "Circle.h"
#include <iostream>
#include <string>
using namespace std;
//Parametrized Constructor
Circle::Circle(string name) : Shape_2D(name)
{

}
//Parametrized Constructor
Circle::Circle(string name, double radius) : Shape_2D(name)
{
    this->radius = radius;
}
//Overridden Draw method
void Circle::draw()
{
    cout << "Drawing Circle '" << this->get_name() << "'" << endl;
}
//Overridden Calculate Area method
double Circle::calculate_area()
{
    return 3.14 * radius * radius;
}
//Overridden info method
void Circle::info()
{
    cout << "I am the Circle '" << this->get_name() << "' of radius " << radius << endl;
    cout << "I am a 2D Shape" << endl;
    cout << "My area is :" << calculate_area() <<"square units" << endl;
}
//Destructor
Circle::~Circle()
{

}
