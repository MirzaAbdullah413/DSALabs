#ifndef CUBE_H
#define CUBE_H


class Cube : public Shape_3D
{
    public:
        Cube(string name) : Shape(string name);
        Cube(string name, double side) : Shape (string name);
        virtual void draw();
        virtual void info();
        virtual double calculate_volume();
        virtual ~Cube();

    protected:

    private:
        double side;
};

#endif // CUBE_H
