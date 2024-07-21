
#include <iostream>
using namespace std;

int isPrime(int n); // missing int

int main()
{
    int num;

    cout << "Enter an integer number: ";
    cin >> num;

    if(isPrime(num)) //num not nm
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;

    return 0;
}

int isPrime(int n)  //not long -> int
{
    int prime = 1;

    for(int i = 2; i < (n - 1); i++)  //int missing
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}