#include <iostream>
using namespace std;

int main()
{
    int a,x=0;
    cout<<" enter the value of a ";
    cin>>a;

    for(int i=1; i<=a; i++ )
    {
       if (i%2==0)
       {
         x=x+i;
       }
       
        
    }

    cout<< x <<endl;


    return 0;

}