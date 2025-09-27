#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <string>
#include "Shape_2D.h"
using namespace std;

class Rectangle : public Shape_2D
{
    public:
        //Prototyping of methods, constructors and destructors
        //Parametrized Constructor
        Rectangle(string name);
        Rectangle(string name, double width, double length);

        virtual void draw();
        virtual void info();
        virtual double calculate_area();
        //Destructor
        virtual ~Rectangle();

    protected:

    private:
        double length;
        double width;
};

#endif // RECTANGLE_H

