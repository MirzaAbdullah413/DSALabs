#ifndef SQUARE_H
#define SQUARE_H


class Square : public Shape_2D
{
    public:
        Square(string name) : Shape_2D(string name);
        Square(string name, double side) : Shape_2D(string name);

        virtual void draw();
        virtual void info();
        virtual double calculate_area();
        virtual ~Square();

    protected:

    private:
        double side;
};

#endif // SQUARE_H
