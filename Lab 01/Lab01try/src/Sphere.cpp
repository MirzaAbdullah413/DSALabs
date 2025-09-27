#include "Sphere.h"
#include <iostream>
#include <string>
using namespace std;

//Parametrized Constructor
Sphere::Sphere(string name) : Shape_3D(name)
{
}
//Parametrized Constructor
Sphere::Sphere(string name, float radius) : Shape_3D(name)
{
    this->radius = radius;
}
//Overriding the draw method
void Sphere::draw()
{
    cout << "Drawing Sphere '" << this->get_name() << "'" << endl;
}
//Overriding the calculate_volume method
double Sphere::calculate_volume()
{
    return (4 * 3.14 * radius * radius * radius) / 3;
}
//Overriding the info method
void Sphere::info()
{
    cout << "I am a Sphere '" << this->get_name() <<"' of radius : "<< radius << endl;
    cout << "I am a 3D Shape." << endl;
    cout <<"My volume is : " << calculate_volume() <<" cubic units" << endl;
}
//Destructor
Sphere::~Sphere()
{
    //dtor
}
