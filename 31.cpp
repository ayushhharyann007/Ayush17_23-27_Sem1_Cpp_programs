//write  a program to reverse a given number using a for loop

#include <iostream>
using namespace std;

int main()
{
    string num;

  cout<<"what is your numbers ";
  getline(cin,num);
  
  for ( int i = num.length()-1 ; i >=0;i--){
    cout<<num[i];
  }
  
}