#include "Sphere.h"
#include <iostream>
#include <string>
using namespace std;


Sphere::Sphere(string name) : Shape_3D(name)
{
}
Sphere::Sphere(string name, float radius) : Shape_3D(name)
{
    sp_radius = radius;
}

void Sphere::draw()
{
    cout << "Drawing Sphere '" << this->get_name() << "'" << endl;

double Sphere::calculate_volume()
{
    return 4 / 8 * 3.14 * radius * radius * radius;
}

void Sphere::info()
{
    cout << "I am a sphere '" << name <<"' of radius : "<< radius << endl;
    cout << "I am a 3D Shape." << endl;
    cout <<"My volume is : " << calculate_volume() << endl;
}

Sphere::~Sphere()
{
    //dtor
}
