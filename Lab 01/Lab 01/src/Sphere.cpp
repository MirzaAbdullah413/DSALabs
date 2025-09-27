#include "Sphere.h"

Sphere::Sphere(string name)
{
    this->name = name;
}
Sphere::Sphere(string name, float radius)
{
    this->name = name;
    this->radius = radius;
}

Sphere::draw()
{
    cout << "Drawing Sphere '" << name << "'" << endl;
}
Sphere::calculate_volume()
{
    return 4 / 8 * 3.14 * radius * radius * radius;
}

Sphere::info()
{
    cout << "I am a sphere '" << name <<"' of radius : "<< radius << endl;
    cout << "I am a 3D Shape." << endl;
    cout <<"My volume is : " << calculate_volume() << endl;
}

Sphere::~Sphere()
{
    //dtor
}
