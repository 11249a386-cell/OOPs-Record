#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
protected:
    int rollNo;
public:
    void getStudentData() {
        getPersonData();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showStudentData() {
        showPersonData();
        cout << "Roll Number: " << rollNo << endl;
    }
};
class GraduateStudent : public Student {
private:
    string degree;
public:
    void getGraduateData() {
        getStudentData();
        cout << "Enter degree: ";
        cin >> degree;
    }

    void showGraduateData() {
        showStudentData();
        cout << "Degree: " << degree << endl;
    }
};
int main() {
    GraduateStudent g1;

    cout << "Enter Graduate Student Details:\n";
    g1.getGraduateData();

    cout << "\nDisplaying Graduate Student Information:\n";
    g1.showGraduateData();

    return 0;
}
