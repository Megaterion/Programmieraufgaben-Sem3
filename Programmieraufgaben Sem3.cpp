#include <iostream>
#include "aufgabe17.h"

int main()
{
    int input = 0;
    std::cout << "Welche Aufgabe willst du ausfueren?\n";
    std::cin >> input;

    switch (input)
    {
    case 17:
        std::cout << "Aufgabe_17 wird ausgefuehrt\n";
        aufgabe();
        break;
    case 18:
        std::cout << "unknown\n";
        break;
    case 19:
        std::cout << "unknown\n";
        break;
    default:
        std::cout << "Fehler!" << std::endl;
        break;
    }
    std::cout << "**************************************************" << std::endl;

    return 0;
}