#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle : public Shape_2D
{
    public:
        Rectangle(string name) : Shape_2D(string name);
        Rectangle(string name, double width, double length) : Shape_2D(string name);

        virtual draw();
        virtual info();
        virtual double calculate_volume();

        virtual ~Rectangle();

    protected:

    private:
        double length;
        double width;
};

#endif // RECTANGLE_H
