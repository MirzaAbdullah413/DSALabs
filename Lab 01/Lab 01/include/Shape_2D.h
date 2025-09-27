#ifndef SHAPE_2D_H
#define SHAPE_2D_H


class Shape_2D : public Shape
{
    public:
        Shape_2D(string name) ;
        virtual void info();
        double calculate_area();
        void draw();
        virtual ~Shape_2D();

    protected:

    private:
};

#endif // SHAPE_2D_H
