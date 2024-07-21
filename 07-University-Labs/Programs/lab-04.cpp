/*
 Write a program that inputs three numbers in main function. 
 The program implements three functions to calculate and 
 display the average, smallest and largest of those numbers.
*/
#include <iostream>
using namespace std;

int main() {
     int num1, num2, num3;
     float avg;
     int smallest, largest;
     
     cout << "Enter three numbers: ";
     cin >> num1 >> num2 >> num3;
     
     // Function to calculate and display average
     avg = (num1 + num2 + num3) / 3.0;
     cout << "Average: " << avg << endl;
     
     // Function to find smallest number
     smallest = (num1 < num2)? (num1 < num3)? num1 : num3 : (num2 < num3)? num2 : num3;
     cout << "Smallest: " << smallest << endl;
     
     // Function to find largest number
     largest = (num1 > num2)? (num1 > num3)? num1 : num3 : (num2 > num3)? num2 : num3;
     cout << "Largest: " << largest << endl;
     
     
    
    return 0;
}
