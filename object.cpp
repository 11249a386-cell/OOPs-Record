#include <iostream>
using namespace std;

class Box {
    double length, breadth, height;

public:
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }
    double volume() {
        return length * breadth * height;
    }
    bool compare(Box box) {
        return this->volume() > box.volume();
    }
};

int main() {
    Box box1(5.0, 3.0, 2.0);
    Box box2(4.0, 4.0, 2.5);

    if (box1.compare(box2))
        cout << "Box1 is bigger than Box2" << endl;
    else
        cout << "Box2 is bigger than or equal to Box1" << endl;

    return 0;
}
