#include <iostream>
#include "shape2D.h"

using namespace std;

// Example for the usage of strong typed enumeration
void aufgabe()
{
    int input = -1;
    cout << "Input a number in the range [0, 3]" << endl;
    cin >> input;
    // strong typed enumerations need a cast from integer to Shape2DType.
    Shape2DType id = static_cast<Shape2DType>(input);

    cout << "Type ";
    switch (id)
    {
    case Shape2DType::Shape2D:
        cout << "Shape2D! " << endl;
        break;
    case Shape2DType::Circle:
        cout << "Circle! " << endl;
        break;
    case Shape2DType::Rectangle:
        cout << "Rectangle! " << endl;
        break;
    case Shape2DType::Square:
        cout << "Square! " << endl;
        break;
    default:
        cout << "unknown!" << endl;
        break;
    }
    cout << "**************************************************" << endl;

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


    cout << "\nInfo of each figure using the display() of the object: \n" << endl;
    shape.display();
    circle.display();
    rectangle.display();
    square.display();
    cout << "**************************************************" << endl;

    cout << "\nUse down-casts with sVec elements to call display methods: \n" << endl;
    static_cast<Shape2D*>(sVec[0])->display();
    static_cast<Circle*>(sVec[1])->display();
    static_cast<Rectangle*>(sVec[2])->display();
    static_cast<Square*>(sVec[3])->display();
    cout << "**************************************************" << endl;

    cout << "\nUse up-casts to call base class display methods: \n" << endl;
    static_cast<Shape2D>(shape).display();
    static_cast<Shape2D>(circle).display();
    static_cast<Shape2D>(rectangle).display();
    static_cast<Shape2D>(square).display();
    cout << "**************************************************" << endl;

    cout << "\nInfo of each figure using global display() function: \n" << endl;
    for (int i = 0; i < 4; i++)
    {
        display(*sVec[i]);
    }

    cout << "\nWhich figure is closer to the origin? \n" << endl;
    display(isCloserToOrigin(circle, square));

    return;
}