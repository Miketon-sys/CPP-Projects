#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class rectangle
{
public:
    rectangle();
    rectangle(double,double);
    void setWidth(double);
    void setHeight(double);
    double getWidth();
    double getHeight();

    double area();
    double perimeter();
    ~rectangle();

private:
    double width;
    double height;

};

#endif // RECTANGLE_H_INCLUDED
