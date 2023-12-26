#include <iostream>
using namespace std;
int main()
{
    int a=0 , b=1 ,i=0,range,c;
    
    cout <<"what is your number range";
    cin>>range;
    cout<<a<<endl<<b<<endl;


    while
    (i<range-2)
    {
      c=a+b;  
      a=b;
      b=c;
      i++;
      cout<<c<<endl;
    }
    

    return 0;
}