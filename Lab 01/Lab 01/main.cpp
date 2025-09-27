#include <iostream>

using namespace std;

int main()
{
    Shape s = new Sphere("Sphere 1", 7);
    s.calculate_volume();
    s.draw();
    s.info();
    return 0;
}
