#include "Circle.h"

Circle::Circle(string name)
{
    this-> name = name;
}

Circle::Circle(string name, double radius)
{
    this->name = name;
    this->radius = radius;
}

Circle::draw()
{
    cout << "Drawing Circle '" << name << "'" << endl;
}
Circle::calculate_area()
{
    return 3.14 * radius * radius;
}
Circle::info()
{
    cout << "I am the circle '" << name << "' of radius " << radius << endl;
    cout << "I am a 2D Shape" << endl;
    cout << "My area is " << calculate_area() << endl;
}
Circle::~Circle()
{

}
