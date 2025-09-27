#ifndef SHAPE_3D_H
#define SHAPE_3D_H
#include <Shape.h>
#include <iostream>
#include <string>

using namespace std;

class Shape_3D : public Shape
{
    public:
        //parameterized Contructor
        Shape_3D(string name);

        virtual void info();

        double calculate_volume();

        //Destructor
        virtual ~Shape_3D();

    protected:

    private:
};

#endif // SHAPE_3D_H
