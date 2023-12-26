//write a program to check if a year is leap or not

#include <iostream>
using namespace std;

int main()
 {
    int a;
    cout<<"enter the value of a";
    cin>>a;

   if
   (a%4==0 && a%100!=0 || a%400==0 )
   { 

     cout<<"leap year hai";
   }
   else
   {
    cout<<"leap year nahi hai";
   }

   return 0;

 }