/*
Write a C++ program which displays the average of even numbers
and average of odd numbers between a range of numbers.You need 
to take inputs of lower and higher values of a range and display 
the averages of even numbers and odd numbers fall between those values.
*/
#include <iostream>
using namespace std;

int main() {
    int lower, upper;
    double sumEven = 0;
    double sumOdd = 0; 
    double countEven = 0; 
    double countOdd = 0;
    
    cout << "Enter lower value of range: ";
    cin >> lower;
    
    cout << "Enter upper value of range: ";
    cin >> upper;
    
    for (int i = lower; i <= upper; i++) {
        if (i % 2 == 0) {
            sumEven += i;
            countEven++;
        } else {
            sumOdd += i;
            countOdd++;
        }
    }
    
    if (countEven > 0) {
        cout << "Average of even numbers between " << lower << " and " << upper << ": " << sumEven / countEven << endl;
    } else {
        cout << "No even numbers found between " << lower << " and " << upper << "." << endl;
    }
    
    return 0;
}