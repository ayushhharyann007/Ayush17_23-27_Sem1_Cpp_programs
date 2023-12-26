//Factorial Function: Implement a C++ 
//function to compute the factorial of a non-negative integer using recursion.

#include <iostream>
using namespace std;

int fact(int i)
{
    if (i == 1)
    {
        return 1;
    }
    return i * fact(i-1);
}


     
     int main ()
     {
        int z;
        cout<<"enter the number";
        cin>>z;

        cout<<fact(z);

     }

     


