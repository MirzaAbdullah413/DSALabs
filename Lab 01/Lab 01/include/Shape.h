#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        //Constructor
        Shape(string name);
        void draw();

        void info();

        string get_name(){
        }
        //Destructor
        virtual ~Shape();



    protected:

    private:
        string name;
};

#endif // SHAPE_H
