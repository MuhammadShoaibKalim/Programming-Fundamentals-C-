//This program is meant to post-increment a time's object and display the results
#include <iostream>
using namespace std;

class Time {
int hr, min;
public:
    Time(int h, int m)
    {
    hr = h;
    min = m;
    };

   int operator+() 
    {
        ++hr;
        ++min;
cout << "\n Hours and Minutes " << hr << "'" << min; 
};

 };
int main()
{
    Time t1(4, 45);
    t1;  
    return 0;
}
