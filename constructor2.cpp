#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
        cout << "Constructor called! Book object created.\n";
    }
    void display() {
        cout << "\n----- Book Details -----\n";
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price : $" << price << endl;
    }
    ~Book() {
        cout << "\nDestructor called! Book object destroyed.\n";
    }
};
int main() {
    Book b1("The Alchemist", "Paulo Coelho", 299.99);
    b1.display();
    return 0;
}
