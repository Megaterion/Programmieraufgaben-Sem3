#include <iostream>
#include "shape2D.h"

void aufgabe()
{
    int input = -1;
    std::cout << "Input a number in the range [0, 3]\n";
    std::cin >> input;
    // strong typed enumerations need a cast from integer to Shape2DType.
    Shape2DType id = static_cast<Shape2DType>(input);

    std::cout << "Type ";
    switch (id)
    {
    case Shape2DType::Shape2D:
        std::cout << "Shape2D! \n";
        break;
    case Shape2DType::Circle:
        std::cout << "Circle! \n";
        break;
    case Shape2DType::Rectangle:
        std::cout << "Rectangle! \n";
        break;
    case Shape2DType::Square:
        std::cout << "Square! \n";
        break;
    default:
        std::cout << "unknown!\n";
        break;
    }
    std::cout << "**************************************************\n";

    /* Objekte erzeugen */
    Shape2D shape(3, 2);
    Circle circle(5, 7, 2);
    Rectangle rectangle(9, 9, 4, 7);
    Square square(2.3, 2.1, 7.7);

    /* Array mit Objekten erstellen */
    Shape2D* sVec[4];
    sVec[0] = &shape;
    sVec[1] = &circle;
    sVec[2] = &rectangle;
    sVec[3] = &square;


    std::cout << "\nInfo of each figure using the display() of the object: \n\n";
    shape.display();
    circle.display();
    rectangle.display();
    square.display();
    std::cout << "**************************************************\n";

    std::cout << "\nUse down-casts with sVec elements to call display methods: \n\n";
    static_cast<Shape2D*>(sVec[0])->display();
    static_cast<Circle*>(sVec[1])->display();
    static_cast<Rectangle*>(sVec[2])->display();
    static_cast<Square*>(sVec[3])->display();
    std::cout << "**************************************************\n";

    std::cout << "\nUse up-casts to call base class display methods: \n\n";
    static_cast<Shape2D>(shape).display();
    static_cast<Shape2D>(circle).display();
    static_cast<Shape2D>(rectangle).display();
    static_cast<Shape2D>(square).display();
    std::cout << "**************************************************\n";

    std::cout << "\nInfo of each figure using global display() function: \n\n";
    for (int i = 0; i < 4; i++)
    {
        display(*sVec[i]);
    }

    std::cout << "\nWhich figure is closer to the origin? \n\n";
    display(isCloserToOrigin(circle, square));

    return;
}