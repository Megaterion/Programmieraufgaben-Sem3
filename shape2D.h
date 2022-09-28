#ifndef _SHAPE2D_
#define _SHAPE2D_

#include <iostream>
#include <cmath>

using namespace std;

enum class Shape2DType
{
    Shape2D,
    Circle,
    Rectangle,
    Square
};

// base class for 2D geometric objects
class Shape2D
{
private:
    double x, y; // reference point of figure
    Shape2DType typeID;
public:

    Shape2D(double xIn, double yIn);
    double distance() const;
    Shape2DType getTypeID();
    void setTypeID(Shape2DType typeIDIn);

    void display();
    double distance();

};

// circle with origin at center of the circle
class Circle : public Shape2D
{
private:
    double radius;
public:
    Circle(double xIn, double yIn, double radius);
    void display();
};

// class Rectangle with upper left corner as reference point
class Rectangle : public Shape2D
{
protected:
    double width, hight;
public:
    Rectangle(double xIn, double yIn, double widthIn, double hightIn);
    void display();
};

// class Square as a specalization of a rectangle
class Square : public Rectangle
{
public:
    Square(double xIn, double yIn, double lengthIn);
    void display();
};

// global functions

void display(Shape2D& obj);
Shape2D& isCloserToOrigin(Shape2D& obj1, Shape2D& obj2);

#endif // _SHAPE2D_