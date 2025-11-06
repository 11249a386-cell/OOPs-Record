#include <iostream>
using namespace std;
class Rectangle {
    int length;
    int breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
        cout << "Default Constructor Called" << endl;
    }
    Rectangle(int l) {
        length = l;
        breadth = l; 
        cout << "Single Parameter Constructor Called" << endl;
    }
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
        cout << "Two Parameter Constructor Called" << endl;
    }


    void displayArea() {
        cout << "Area = " << (length * breadth) << endl;
    }
};

int main() {
    Rectangle r1;         
    Rectangle r2(5);      
    Rectangle r3(4, 6);  

    cout << endl << "Areas of Rectangles:" << endl;
    cout << "Rectangle 1: ";
    r1.displayArea();

    cout << "Rectangle 2: ";
    r2.displayArea();

    cout << "Rectangle 3: ";
    r3.displayArea();

    return 0;
}
