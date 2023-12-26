#include <iostream>
using namespace std;

int main()
{
    
    int speed;
    cout <<"what is your speed ";
    cin>>speed;

    if
    (speed >= 120) 
    {
       cout<< "dheere chalo yaar darr jaayegi" <<endl;
       cout << "speed-30" <<endl;
       
    }

    else if
    ( speed >=80 && speed <=120 )
    {
       cout<< "bhai abhi time hai karle dheere" <<endl;
       cout << "speed-20"<<endl;
    }

    else if 
    ( speed > 80)
    {
       cout<< "okay" <<endl;
    }

    return 0;
    
}