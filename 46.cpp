
#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,x=0;
    
    cout<<"what is your number n";
    cin>>n;
    sum+=n;


    while
    (n!=0 )
    {
    
        cout <<"enter a number";
        cin>>n;
        sum+=n;
        x+=1;
      
    }
    float average;
    average=sum/x;
    cout<<"average is:"<<average<<endl;

    return 0;
}