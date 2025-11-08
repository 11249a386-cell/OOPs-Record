#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v = 0) : value(v) {}

    bool operator==(Number obj) {
        return value == obj.value;
    }
};

int main() {
    Number n1(5), n2(5), n3(10);

    if (n1 == n2)
        cout << "n1 and n2 are equal\n";
    else
        cout << "n1 and n2 are not equal\n";

    if (n1 == n3)
        cout << "n1 and n3 are equal\n";
    else
        cout << "n1 and n3 are not equal\n";

    return 0;
}
