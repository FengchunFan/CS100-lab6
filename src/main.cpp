  #include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect;
    rect(2,3);
    cout << "Rectangle area: " << rect.area() << endl;
    cout << "Rectangle perimeter: " << rect.perimeter() << endl;
    return 0;
}
