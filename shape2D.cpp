#include <iostream>
#include <iomanip>
#include <math.h>

#include "shape2D.h"

// class shape2D

Shape2D::Shape2D(double xIn, double yIn)
    : x{ xIn }, y{ yIn }, typeID{ Shape2DType::Shape2D }
{
    /* none */
}

Shape2DType Shape2D::getTypeID()
{
    return typeID;
}

void Shape2D::setTypeID(Shape2DType typeIDIn)
{
    typeID = typeIDIn;
}

void Shape2D::display()
{
    std::cout << "Shape2D: X " << x << ", Y " << y << std::endl;
    std::cout << "\n" << std::endl;
}

double Shape2D::distance()
{
    return sqrt((x * x) + (y * y));
}

// class circle with origin at center of the circle

Circle::Circle(double xIn, double yIn, double radiusIn)
    : Shape2D::Shape2D(xIn, yIn), radius{ radiusIn }
{
    Shape2D::setTypeID(Shape2DType::Circle);
}

void Circle::display()
{
    std::cout << "Circle: radius " << radius << std::endl;
    Shape2D::display();
}

// class Rectangle with upper left corner as reference point

Rectangle::Rectangle(double xIn, double yIn, double widthIn, double hightIn)
    : Shape2D::Shape2D(xIn, yIn), width{ widthIn }, hight{ hightIn }
{
    Shape2D::setTypeID(Shape2DType::Rectangle);
}

void Rectangle::display()
{
    std::cout << "Rectangle: width " << width << ", hight " << hight << std::endl;
    Shape2D::display();
}

// class Square as a specalization of a rectangle

Square::Square(double xIn, double yIn, double lengthIn)
    : Rectangle::Rectangle(xIn, yIn, lengthIn, lengthIn)
{
    Shape2D::setTypeID(Shape2DType::Square);
}

void Square::display()
{
    std::cout << "Square: length " << width << std::endl;
    Shape2D::display();
}

// global functions

void display(Shape2D& obj)
{
    switch (obj.getTypeID())
    {
    case Shape2DType::Shape2D:
        static_cast<Shape2D*>(&obj)->display();
        break;
    case Shape2DType::Circle:
        static_cast<Circle*>(&obj)->display();
        break;
    case Shape2DType::Rectangle:
        static_cast<Rectangle*>(&obj)->display();
        break;
    case Shape2DType::Square:
        static_cast<Square*>(&obj)->display();
        break;
    }

}

Shape2D& isCloserToOrigin(Shape2D& obj1, Shape2D& obj2)
{
    return (obj1.distance() < obj2.distance()) ? obj1 : obj2;
}
