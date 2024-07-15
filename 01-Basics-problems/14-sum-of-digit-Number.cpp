#include <iostream>
using namespace std;

int main() {
    // sum of a number of a digit. 
    int number;
    cout<<" Enter the number :";
    
    cin >> number;
     
     int sum = 0;
   while (number>0)
   {
    sum +=number%10;
    number /=10;

   }
   cout<<"The sum of digit of a number is : "<<sum;
    return 0;
}


