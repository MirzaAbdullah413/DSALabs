#ifndef SQUARE_H
#define SQUARE_H
#include "Shape_2D.h"
#include <iostream>
#include <string>
using namespace std;
class Square : public Shape_2D
{
    public:
        //Parametrized Constructor
        Square(string name) ;
        Square(string name, double side);

        virtual void draw();
        virtual void info();
        virtual double calculate_area();
        //Destructor
        virtual ~Square();

    protected:

    private:
        double side;
};

#endif // SQUARE_H
