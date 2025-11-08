#include <iostream>
using namespace std;
class Student {
protected:
    int rollNo;
public:
    void getRollNo() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
    void showRollNo() {
        cout << "Roll Number: " << rollNo << endl;
    }
};
class Marks {
protected:
    float sub1, sub2;
public:
    void getMarks() {
        cout << "Enter marks of two subjects: ";
        cin >> sub1 >> sub2;
    }
    void showMarks() {
        cout << "Subject 1: " << sub1 << "\nSubject 2: " << sub2 << endl;
    }
};
class Result : public Student, public Marks {
    float total;
public:
    void calculate() {
        total = sub1 + sub2;
    }

    void display() {
        showRollNo();
        showMarks();
        cout << "Total Marks: " << total << endl;
    }
};
int main() {
    Result r1;
    r1.getRollNo();
    r1.getMarks();
    r1.calculate();

    cout << "\n--- Result ---\n";
    r1.display();

    return 0;
}
