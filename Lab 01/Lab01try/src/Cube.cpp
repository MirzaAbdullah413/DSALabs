#include "Cube.h"
#include <iostream>
#include <string>
using namespace std;

//Parametrized Constructor
Cube::Cube(string name) : Shape_3D(name)
{

}
//Parametrized Constructor
Cube::Cube(string name, double side) : Shape_3D(name)
{
    this->side = side;
}
//Overriding the draw method
void Cube::draw()
{
    cout << "Drawing Cube '" << this->get_name()<<"'" << endl;
}
//Overriding the calculate_volume method
double Cube::calculate_volume()
{
    return side * side * side;
}
//Overrideing the info method
void Cube::info()
{
    cout << "I am a Cube '" << this->get_name() << "' of side : " << side << endl;
    cout << "I am a 3D Shape." << endl;
    cout << "My volume is : " << calculate_volume() << " cubic units" << endl;
}
//Destructor
Cube::~Cube()
{
    //dtor
}
