#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called! Object created." << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called! Object destroyed." << endl;
    }
};

int main() {
    cout << "Creating object obj1." << endl;
    MyClass obj1;  

    {
        cout << "Creating object obj2 inside a block." << endl;
        MyClass obj2; 
    }  

    cout << "Exiting main function." << endl;
    return 0; 
}