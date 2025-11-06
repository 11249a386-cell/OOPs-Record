#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    Box() {
        length = 0.0;
        breadth = 0.0;
        height = 0.0;
        cout << "Default constructor called. Box dimensions set to 0." << endl;
    }

   
    Box(double side) {
        length = side;
        breadth = side;
        height = side;
        cout << "Parameterized constructor called. Cube with side " << side << " created." << endl;
    }

    
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
        cout << "Parameterized constructor called. Box with dimensions (" << l << ", " << b << ", " << h << ") created." << endl;
    }

    
    double getVolume() {
        return length * breadth * height;
    }
};

int main() {
    cout << "Creating box1 using default constructor." << endl;
    Box box1;  
    cout << "Creating box2 using parameterized constructor (cube)." << endl;
    Box box2(5);  

    cout << "Creating box3 using parameterized constructor (rectangular box)." << endl;
    Box box3(4, 6, 8);  
    cout << "Volume of box1: " << box1.getVolume() << endl;
    cout << "Volume of box2: " << box2.getVolume() << endl;
    cout << "Volume of box3: " << box3.getVolume() << endl;

    return 0;
}
Creating box1 using default constructor.
Default constructor called. Box dimensions set to 0.
Creating box2 using parameterized constructor (cube).
Parameterized constructor called. Cube with side 5 created.
Creating box3 using parameterized constructor (rectangular box).
Parameterized constructor called. Box with dimensions (4, 6, 8) created.
Volume of box1: 0
Volume of box2: 125
Volume of box3: 192