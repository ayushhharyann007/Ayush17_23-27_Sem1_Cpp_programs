// summ of no. which divisible by 3 and 5

#include <iostream>
using namespace std;

int main()
{
    int a,x=0;
    cout<<" enter the value of a ";
    cin>>a;

    for(int i=1; i<=a; i++ )
    {
       if (i%3==0 || i%5==0)
       {
         x=x+i;
       }
       
        
    }

    cout<< x <<endl;


    return 0;

}