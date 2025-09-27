#include "Cube.h"


Cube::Cube(string name)
{
    this->name = name;
}
Cube::(string name, double side)
{
    this->name = name;
    this->side = side;
}
Cube::draw()
{
    cout << "Drawing Cube " << name << endl;
}
Cube::calculate_volume()
{
    return side * side * side;
}
Cube::info()
{
    cout << "I am a cube '" << name << "' of side : " << side << endl;
    cout << "I am a 3D Shape." << endl;
    cout << "My volume is : " << calculate_volume() << " cubic units" << endl;
}

Cube::~Cube()
{
    //dtor
}
