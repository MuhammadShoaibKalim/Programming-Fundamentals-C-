# Programming Fundamentals (PF) Course

Welcome to the Programming Fundamentals course repository. This repository contains various lab programs and their corrections as part of the university curriculum.

## Labs

### Lab-Program-01
**Task**: Write a C++ program that performs a transaction in the existing balance of a Bank’s account. Take input from the user the amount he/she wants to either withdraw or deposit from the account’s balance and displays the current balance after performing the transaction user wants to perform on the Bank’s account.

### Lab-Correction-01
**Task**: Identify and correct errors in the following program that is meant to take input of three numbers from user and displays the largest.
    ```
    #include <iostream>
using namespace std;

int isPrime(n);

int main()
{
    int num;

    cout << "Enter an integer number: ";
    cin >> num;

    if(isPrime(nm))
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;

    return 0;
}

int isPrime(long n)
{
    int prime = 1;

    for(i = 2; i < (n - 1); i++)
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}```

### Lab-Program-02
**Task**: Write a C++ program which displays the average of even numbers and average of odd numbers between a range of numbers. You need to take inputs of lower and higher values of a range and display the averages of even numbers and odd numbers fall between those values.

### Lab-Correction-02
**Task**: This program demonstrates sum of natural numbers. Identify and correct errors.
```
//class, constructor
#include <iostream>
using namespace std;

class Car {
  public:
    void Car(){}
    int speed(int maxSpeed);

}

int Car:speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj;  
  cout << myObj.speed(200); 
  return 0;
}
```
### Lab-Program-03
**Task**: Write a C++ program that sets array ith location value to i+100. Display the values assigned to odd index values of array.

### Lab-Correction-03
**Task**: This program inputs five floating point values in an array and displays the values in reverse order in which the user has entered.

### Lab-Program-04
**Task**: Write a program that uses array of characters to take input from user and checks whether the input represents a palindrome or not, using pointer arithmetic. In both cases the program should display appropriate messages.

### Lab-Correction-04
**Task**: This program demonstrates the use of arrays using pointers. Identify and correct errors.

### Lab-Program-05
**Task**: Write a program that inputs three numbers in main function. The program implements three functions to calculate and display the average, smallest and largest of those numbers.

### Lab-Correction-05
**Task**: This program checks and displays if a number is prime. Identify and correct errors.

### Lab-Program-06
**Task**: Write a program that defines a structure to store BookId, Price and Pages of a book. It declares two structure variables and input values displays the record of the more costly book.

### Lab-Correction-06
**Task**: Identify and correct errors in the program.

### Lab-Program-07
**Task**: Write a program that creates a class to display Utility_Bill. The class should take customer name, bill number, units consumed, and customer address as inputs and displays the input values and the bill amount which is calculated after multiplying the units consumed with per unit price. If units consumed are less than 300, the per unit price is Rs. 8; if greater than or equal to 300 but less than 1000, the per unit price is Rs. 5. If units consumed are greater than 999, the per unit price is Rs. 14.

### Lab-Correction-07
**Task**: This program implements a class of Book and displays the data of three books entered by user. Identify and correct errors.
