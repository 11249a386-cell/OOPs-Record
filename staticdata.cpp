#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  
public:
    Counter() {
        count++;  
    }

    ~Counter() {
        count--;  
    }

    
    static int getCount() {
        return count;
    }
};

int Counter::count = 0;

int main() {
    cout << "Initial count: " << Counter::getCount() << endl;

    Counter c1;
    cout << "Count after creating c1: " << Counter::getCount() << endl;

    {
        Counter c2, c3;
        cout << "Count after creating c2 and c3: " << Counter::getCount() << endl;
    } 
    cout << "Count after destroying c2 and c3: " << Counter::getCount() << endl;

    return 0;
}
