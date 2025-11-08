#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter(int c = 0) : count(c) {}

    void operator++() {
        ++count;
    }

    void operator++(int) {
        count++;
    }

    void show() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial: ";
    c1.show();

    ++c1;  
    cout << "After prefix ++: ";
    c1.show();

    c1++;   
    cout << "After postfix ++: ";
    c1.show();

    return 0;
}
