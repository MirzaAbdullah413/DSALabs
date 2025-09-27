#include "Square.h"
#include <iostream>
#include <string>
using namespace std;
//Parametrized Constructor
Square::Square(string name) : Shape_2D(name)
{
}
//Parametrized Constructor
Square::Square(string name, double side) : Shape_2D(name)
{
    this -> side = side;
}
//Overriding the draw method
void Square::draw()
{
    cout << "Drawing Square " << this->get_name() << "'" << endl;
}
//Overriding the calculate_area method
double Square::calculate_area()
{
    return side * side;
}
//Overriding the info method
void Square::info()
{
    cout <<"I am Square ' "<< this->get_name() << "' of side : " << side << endl;
    cout << "I am 2D Shape" << endl;
    cout << "My surface area is : " << calculate_area() <<" square units" << endl;
}
//Destructor
Square::~Square()
{
    //dtor
}
