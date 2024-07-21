/*
 Write a C++ program that performs a transaction in the existing 
 balance of a Bank’s account. Take input from the user the amount 
 he/she wants to either withdraw or deposit from the account’s 
 balance and displays the current balance after performing the 
 transaction user wants to perform on the Bank’s account.
*/

#include <iostream>
#include <cstdlib> // For abs()
using namespace std;

int main() {
    int balance = 15000, amount;
    cout << "Your current balance is: " << balance << endl;

    cout << "Enter amount to deposit or withdraw: ";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "Amount deposited. New balance: " << balance << endl;
    } else if (amount < 0 && balance >= abs(amount)) {
        balance += amount; 
        cout << "Amount withdrawn. New balance: " << balance << endl;
    } else if (amount < 0 && balance < abs(amount)) {
        cout << "Insufficient funds!" << endl;
    } else {
        cout << "No transaction performed." << endl;
    }

    return 0;
}
