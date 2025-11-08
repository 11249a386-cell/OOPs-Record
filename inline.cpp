#include <iostream>
using namespace std;

inline float areaCircle(float r) {
    return 3.14159 * r * r;
}

inline float areaRectangle(float l, float b) {
    return l * b;
}

int main() {
    cout << "Area of Circle (r=5): " << areaCircle(5) << endl;
    cout << "Area of Rectangle (4x6): " << areaRectangle(4, 6) << endl;
    return 0;
}
