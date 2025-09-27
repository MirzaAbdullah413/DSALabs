#include "Rectangle.h"

Rectangle::Rectangle(string name)
{
    this->name = name;
}
Rectangle::Rectangle(string name, double width, double length)
{
    this->name = name;
    this->width = width;
    this->length = length;
}

Rectangle::draw()
{
    cout << "Drawing rectangle '" <<name<<endl;
}
Rectangle::calculate_area()
{
    return width * length;
}

Recatangle::info()
{
    cout << "I am a rectangle '" <<name << "' of length: " << length <<" and width : " << width << endl;
    cout << " I am 2D Shape." << endl;
    cout << "My surface area is " << calculate_area() << endl;
}

Rectangle::~Rectangle()
{
    //dtor
}
