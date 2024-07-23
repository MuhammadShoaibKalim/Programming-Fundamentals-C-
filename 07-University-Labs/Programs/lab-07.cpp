#include <iostream>
#include <string>
using namespace std;

class Utility_Bill {
private:
    string customerName;
    int billNumber;
    int unitsConsumed;
    string customerAddress;
    float billAmount;

    void calculateBillAmount() {
        if (unitsConsumed < 300) {
            billAmount = unitsConsumed * 8;
        } else if (unitsConsumed >= 300 && unitsConsumed < 1000) {
            billAmount = unitsConsumed * 5;
        } else if (unitsConsumed >= 1000) {
            billAmount = unitsConsumed * 14;
        }
    }

public:
    void input() {
        cout << "Enter customer name: ";
        getline(cin, customerName);
        cout << "Enter bill number: ";
        cin >> billNumber;
        cout << "Enter units consumed: ";
        cin >> unitsConsumed;
        cin.ignore();  // To ignore the newline character left by cin
        cout << "Enter customer address: ";
        getline(cin, customerAddress);

        calculateBillAmount();
    }

    void display() {
        cout << "\nUtility Bill Details:\n";
        cout << "Customer Name: " << customerName << endl;
        cout << "Bill Number: " << billNumber << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Customer Address: " << customerAddress << endl;
        cout << "Bill Amount: Rs. " << billAmount << endl;
    }
};

int main() {
    Utility_Bill bill;
    bill.input();
    bill.display();
    return 0;
}
