#include <iostream>

#include "aufgabe17.h"


int main()
{
    int input = 0;
    std::cout << "Welche Aufgabe willst du ausfueren?\n";
    std::cin >> input;


    switch (input)
    {
    case 1:
        std::cout << "error\n";
        break;
    case 17:
        std::cout << "Aufgabe_17 wird ausgefuehrt\n";
        aufgabe();
        break;
    case 18:
        std::cout << "error\n";
        break;
    case 19:
        std::cout << "error?\n";
        break;
    default:
        std::cout << "unknown!" << std::endl;
        break;
    }
    std::cout << "**************************************************" << std::endl;

    return 0;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"
