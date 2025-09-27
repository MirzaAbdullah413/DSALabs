#include "Square.h"

Square::Square(string name)
{
    this-> name = name;
}
Square::Square(string name, double side)
{
    this -> name = name;
    this -> side = side;
}

Square::draw()
{
    cout << "Drawing the square " << name << endl;
}
Square::calculate_area()
{
    return side * side;
}
Square::info()
{
    cout <<"I am square ' "<< name << "' of side : " << side << endl;
    cout << "I am 2D Shape" << endl;
    cout << "My surface area is " << calculate_area() << endl;
Square::~Square()
{
    //dtor
}
