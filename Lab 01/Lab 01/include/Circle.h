#ifndef CIRCLE_H
#define CIRCLE_H


class Circle : public Shape_2D
{
    public:
        Circle(string name) : Shape_2D(string name);
        Circle(string name, double radius) : Shape_2D(string name);
        virtual void draw();
        virtual void info();
        virtual double calculate_area();
        virtual ~Circle();

    protected:

    private:
        double radius;
};

#endif // CIRCLE_H
