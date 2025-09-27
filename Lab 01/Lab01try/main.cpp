#include "Shape.h"
#include "Sphere.h"
#include "Cube.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Size of the array
    const int shapes_count = 10;
    //Array of object pointers
    Shape * Shapes[shapes_count];
    //Dynamic Allocation
    Shapes[0] = new Circle("Circle 1", 5.0);
    Shapes[1] = new Square("Square 1" , 4.0);
    Shapes[2] = new Rectangle("Rectangle 1", 6.0, 4.0);
    Shapes[3] = new Sphere("Sphere 1" , 3.0);
    Shapes[4] = new Cube("Cube 1" , 2.0);
    Shapes[5] = new Circle("Circle 2" , 6.0);
    Shapes[6] = new Square("Square 2", 5.0);
    Shapes[7] = new Rectangle("Rectangle 2", 7.0, 5.0);
    Shapes[8] = new Sphere("Sphere 2", 4.0);
    Shapes[9] = new Cube("Cube 2", 3.0);

    //Using for loop to call the draw method of each object pointer in array
    cout <<"Drawing the Shapes"<<endl;
    for(int i = 0; i< shapes_count; i++)
    {
        Shapes[i] ->draw();
    }
    cout << endl;
    //Using for loop to call the info method of each object pointer in the array
    cout <<"Getting Shapes info"<< endl;
    for (int i = 0; i< shapes_count; i++)
    {
        Shapes[i] -> info();
        cout << endl;
    }
    return 0;
}
