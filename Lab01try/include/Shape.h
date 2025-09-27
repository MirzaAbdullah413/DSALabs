#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;
class Shape
{
    public:
        //Constructor
        Shape(string name);

        virtual void draw() = 0;

        virtual void info() = 0;

        string get_name();
        //Destructor
        virtual ~Shape();



    protected:

    private:
        string name;
};

#endif // SHAPE_H
