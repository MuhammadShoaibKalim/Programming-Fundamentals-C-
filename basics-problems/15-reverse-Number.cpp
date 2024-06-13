#include <iostream>
using namespace std;

int main() {
    // reverse of a number . 
    int number;
    cout<<" Enter the number :";
    
    cin >> number;
     
     int sum = 0;
     int reminder;
   while (number>0)
   {
    reminder = number % 10;
    sum = sum * 10 + reminder;
    number = number / 10;

   }
    cout << " The reverse of digit of a number is : " << sum ;
    return 0;
}


