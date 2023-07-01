#include "Square.h"
#include <iostream>

using namespace std;

int main()
{
    Square object1, object2, object3, object4;
    object1.setLength(5);
    object2.setLength(2);
    object3 = object1 + object2;
    object4 = object1 * object2;
    cout << "Area (Operator sum): " << object3.getArea() << endl;
    cout << "Area (Operator Average): " << object4.getArea() << endl;

    return 0;
}