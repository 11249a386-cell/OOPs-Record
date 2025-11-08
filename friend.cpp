#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) : length(l) {}
    friend void showLength(Box b);
};


void showLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box box1(15);
    showLength(box1); 
    return 0;
}
