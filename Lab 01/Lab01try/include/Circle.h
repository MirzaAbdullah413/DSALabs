#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape_2D.h"
#include <iostream>
#include <string>
using namespace std;

class Circle : public Shape_2D
{
    public:
        //defining the parametrized constructors
        Circle(string name);
        Circle(string name, double radius);
        //defining the virtual methods
        virtual void draw();
        virtual void info();
        virtual double calculate_area();
        //initializing the destructor
        virtual ~Circle();

    protected:

    private:
        double radius;
};

#endif // CIRCLE_H
