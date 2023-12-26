#include <iostream>
using namespace std;
int main()
{
    int a,i=2,count=0;
    
    cout <<"what is your number a";
    cin>>a;


    while(i<=a/2)
    {
      if(a%i==0)
      {
        count++;
        
        break;
      }
      i++;
    }
     
    if(count == 0)
    {
        cout<<" prime number "<<endl;
    }
    else
    {
        cout<<" not a prime number "<<endl;
    }
    
    return 0;
}