  #include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle* rect1 = new Rectangle(2,3);
    cout << "Rectangle 1, width 2 height 3" << endl;
    cout << "Rectangle area: " << rect1->area() << endl;
    cout << "Rectangle perimeter: " << rect1->perimeter() << endl;

    Rectangle rect2;
    rect2.set_width(4);
    rect2.set_height(5);
    cout << "Rectangle 2, width 4 height 5" << endl;
    cout << "Rectangle area: " << rect2.area() << endl;
    cout << "Rectangle perimeter: " << rect2.perimeter() << endl;
    return 0;
}
