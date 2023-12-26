//Prime Number Function: 
//Create a C++ function that determines whether a given integer is a prime number or not.


#include <iostream>
using namespace std;

bool isprime (int a)
{
    int count=0 ;
   


    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {   
            count++;
            break;
        }
    }
    if(count==0)
    {
        return true;
    }
    else
    {
        return false;
    }
};

 int main()
{
    int num;
    cout <<"what is your number b";
    cin>>num;
    if (isprime(num)== true)
    {
        cout<<"number is a prime";
    }

    else 
    {
        cout<<"number is not a prime";
    }
    return 0;

}

