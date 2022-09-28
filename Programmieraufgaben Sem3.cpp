#include <iostream>

#include "aufgabe17.cpp"

int main()
{
    int input = 0;
    std::cout << "Welche Aufgabe möchtest du ausführen?\n";
    cin >> input;


    switch (input)
    {
    case 1:
        std::cout << "error\n";
        break;
    case 17:
        std::cout << "Aufgabe_17 wird ausgeführt\n";
        break;
    case 18:
        std::cout << "error\n";
        break;
    case 19:
        std::cout << "error?\n";
        break;
    default:
        cout << "unknown!" << endl;
        break;
    }
    cout << "**************************************************" << endl;

    return 0;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"
