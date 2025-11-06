#include <iostream>
using namespace std;

class Book {
    int bookID;
    char title[100];
    float price;

public:
    void getData();
    void displayData();
};

void Book::getData() {
    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Book Title: ";
    cin.ignore(); 
    cin.getline(title, 100);
    cout << "Enter Price: ";
    cin >> price;
}

void Book::displayData() {
    cout << "\nBook Details:\n";
    cout << "Book ID: " << bookID << endl;
    cout << "Title: " << title << endl;
    cout << "Price: " << price << endl;
}

int main() {
    Book b;
    b.getData();
    b.displayData();
    return 0;
}
