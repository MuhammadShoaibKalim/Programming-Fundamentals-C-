/*
Write a C++ program that sets array ith location value to i+100. 
Display the values assigned to odd index values of array.
*/
#include <iostream>
using namespace std;

int main() {
    const int size = 10;  
    int arr[size];


    for (int i = 0; i < size; ++i) {
        arr[i] = i + 100;
    }

  
    cout << "Values at odd index locations:" << endl;
    for (int i = 1; i < size; i += 2) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
