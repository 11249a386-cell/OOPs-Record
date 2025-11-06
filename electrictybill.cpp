#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
    int consumerNo;
    string consumerName;
    int prevReading;
    int currReading;
    string connectionType;  
    int unitsConsumed;
    float billAmount;

public:
    void getData();
    void calculateBill();
    void displayBill();
};

void ElectricityBill::getData() {
    cout << "Enter consumer number: ";
    cin >> consumerNo;
    cin.ignore(); 

    cout << "Enter consumer name: ";
    getline(cin, consumerName);

    cout << "Enter previous month reading: ";
    cin >> prevReading;

    cout << "Enter current month reading: ";
    cin >> currReading;

    while (currReading < prevReading) {
        cout << "Current reading must be greater than or equal to previous reading. Enter again: ";
        cin >> currReading;
    }

    cout << "Enter type of EB connection (domestic/commercial): ";
    cin >> connectionType;

    for (auto &c : connectionType) c = tolower(c);

    while (connectionType != "domestic" && connectionType != "commercial") {
        cout << "Invalid connection type. Please enter 'domestic' or 'commercial': ";
        cin >> connectionType;
        for (auto &c : connectionType) c = tolower(c);
    }

    unitsConsumed = currReading - prevReading;
}

void ElectricityBill::calculateBill() {
    int units = unitsConsumed;
    billAmount = 0;

    if (connectionType == "domestic") {
        
        if (units <= 100) {
            billAmount = units * 1.0;
        } else if (units <= 200) {
            billAmount = 100 * 1.0 + (units - 100) * 2.5;
        } else if (units <= 500) {
            billAmount = 100 * 1.0 + 100 * 2.5 + (units - 200) * 4.0;
        } else {
            billAmount = 100 * 1.0 + 100 * 2.5 + 300 * 4.0 + (units - 500) * 6.0;
        }
    } else {
        // Commercial tariff
        if (units <= 100) {
            billAmount = units * 2.0;
        } else if (units <= 200) {
            billAmount = 100 * 2.0 + (units - 100) * 4.5;
        } else if (units <= 500) {
            billAmount = 100 * 2.0 + 100 * 4.5 + (units - 200) * 6.0;
        } else {
            billAmount = 100 * 2.0 + 100 * 4.5 + 300 * 6.0 + (units - 500) * 7.0;
        }
    }
}

void ElectricityBill::displayBill() {
    cout << "\n----- Electricity Bill -----\n";
    cout << "Consumer Number: " << consumerNo << endl;
    cout << "Consumer Name: " << consumerName << endl;
    cout << "Connection Type: " << connectionType << endl;
    cout << "Previous Reading: " << prevReading << endl;
    cout << "Current Reading: " << currReading << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Bill Amount: Rs. " << billAmount << endl;
}

int main() {
    ElectricityBill eb;
    eb.getData();
    eb.calculateBill();
    eb.displayBill();
    return 0;
}
