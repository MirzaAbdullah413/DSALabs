#ifndef CUBE_H
#define CUBE_H
#include <iostream>
#include <string>
#include "Shape_3D.h"
using namespace std;

class Cube : public Shape_3D
{
    public:
        //Prototyping of the methods and constructors
        //Parametrized Constructor
        Cube(string name);
        Cube(string name, double side);
        //Virtual methods
        virtual void draw();
        virtual void info();
        virtual double calculate_volume();
        //Destructor
        virtual ~Cube();

    protected:

    private:
        double side;
};

#endif // CUBE_H
