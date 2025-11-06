#include <iostream>
using namespace std;

class Student {
    int id;
    char name[50];
    int age;

public:
    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();  
        cout << "Enter Name: ";
        cin.getline(name, 50);
        cout << "Enter Age: ";
        cin >> age;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];  

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << (i + 1) << ":\n";
        students[i].input();
    }

    cout << "\nStudent Information:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    return 0;
}
