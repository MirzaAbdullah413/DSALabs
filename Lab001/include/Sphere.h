#ifndef SPHERE_H
#define SPHERE_H
#include <iostream>
#include <string>
#include "Shape_3D.h"
using namespace std;

class Sphere : public Shape_3D
{
    public:
        //Parameterized constructors
        Sphere(string name);

        Sphere(string name, float radius);

        //Draw Method
        virtual void draw();

        //Virtual info method
        virtual void info();

        //virtual calculate area method
        virtual double calculate_volume();

        virtual ~Sphere();

    protected:

    private:
        double radius;
};

#endif // SPHERE_H
