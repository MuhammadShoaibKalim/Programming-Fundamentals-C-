/*
take input from user and checks whether the 
input represents a palindrome or not, using 
pointer arithmetic. In both cases the program 
should display appropriate messages.
*/

#include <iostream>
using namespace std;

int main() {
      int num;
      cout << "Enter a number: ";
      cin >> num;
      
      int original = num;
      int *start = &num;
        int *end = &num;
        
        // Move end pointer to the last digit
        while (*end!= 0) {
            end++;
        }
        end--;
        
        // Compare each digit from start and end
        while (start < end) {
            if (*start!= *end) {
                cout << original << " is not a palindrome." << endl;
                return 0;
            }
            start++;
            end--;
        }
        
        cout << original << " is a palindrome." << endl;
        
        return 0;
    
    return 0;
}