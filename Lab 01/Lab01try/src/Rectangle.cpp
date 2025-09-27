#include "Rectangle.h"
#include <iostream>
#include <string>
using namespace std;
//Parametrized Constructor
Rectangle::Rectangle(string name) : Shape_2D(name)
{

}
//Parametrized Constructor
Rectangle::Rectangle(string name, double width, double length) : Shape_2D(name)
{
    this->width = width;
    this->length = length;
}
//Overriding the draw method
void Rectangle::draw()
{
    cout << "Drawing Rectangle '" <<this->get_name()<< "'"<<endl;
}
//Overriding the calculate_area method
double Rectangle::calculate_area()
{
    return width * length;
}
//Overriding the info method
void Rectangle::info()
{
    cout << "I am a Rectangle '" <<this->get_name() << "' of length: " << length <<" and width : " << width << endl;
    cout << " I am 2D Shape." << endl;
    cout << "My surface area is : " << calculate_area() << " square units" << endl;
}
//Destructor
Rectangle::~Rectangle()
{
    //dtor
}
