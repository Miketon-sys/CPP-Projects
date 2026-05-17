#ifndef TOLENTINO_H_INCLUDED
#define TOLENTINO_H_INCLUDED

class rectangle
{
public:
    void setWidth(double);
    void setHeight(double);
    double getWidth();
    double getHeight();

    double area();
    double perimeter();

private:
    double width;
    double height;

};

#endif // TOLENTINO_H_INCLUDED
