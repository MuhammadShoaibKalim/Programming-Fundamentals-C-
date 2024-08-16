#include <iostream>
using namespace std;

int main(){
 

    int arr[4][5] = {{2,3,4,5},{67,56,45,34,23}} ;
    // int arr[4][5] = {2,3,4,5,67,56,45,34,23} ;
    cout<<" Here is a 2d array : "<<endl;
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
   

    return 0;
}