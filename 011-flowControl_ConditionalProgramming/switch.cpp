#include <iostream>
using namespace std;

// TOOLS
const int Pen{10}, Marker{30}, Eraser{15}, Rectangle{50}, Circle{45}, Ellipse{60};

int main()
{
    int tool{Marker}; // integral types and enums : int, long , unsigned short etc.

    switch (tool)
    {
    case Pen:
        cout << "Pen Tool Activated\n";
        break;
    case Eraser:
        cout << "Eraser Tool Activated\n";
        break;
    case Marker:
        cout << "Marker Tool Activated\n";
        break;
    case Rectangle:
        cout << "Rectangle Tool Activated\n";
        break;
    case Circle:
        cout << "Circle Tool Activated\n";
        break;
    case Ellipse:
        cout << "Ellipse Tool Activated\n";
        break;

    default:
        cout << "Can't Match Any Tool!\n";
        break;
    }
}