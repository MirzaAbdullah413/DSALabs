#include "Cube.h"
#include <iostream>
#include <string>
using namespace std;


Cube::Cube(string name) : Shape_3D(name)
{

}
Cube::Cube(string name, double side) : Shape_3D(name)
{
    this->side = side;
}
void Cube::draw()
{
    cout << "Drawing Cube " << name << endl;
}
double Cube::calculate_volume()
{
    return side * side * side;
}
void Cube::info()
{
    cout << "I am a cube '" << name << "' of side : " << side << endl;
    cout << "I am a 3D Shape." << endl;
    cout << "My volume is : " << calculate_volume() << " cubic units" << endl;
}

Cube::~Cube()
{
    //dtor
}
