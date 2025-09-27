#ifndef SPHERE_H
#define SPHERE_H


class Sphere : public Shape_3D
{
    public:
        //Parameterized constructors
        Sphere(string name) : Sphere(string name);

        Sphere(string name, float radius) : Sphere(string name);

        //Draw Method
        virtual void draw();

        //Virtual info method
        virtual void info();

        //virtual calculate area method
        virtual double calculate_volume();

        virtual ~Sphere();

    protected:

    private:
};

#endif // SPHERE_H
