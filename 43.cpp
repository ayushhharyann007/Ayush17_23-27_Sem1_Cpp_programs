#include <iostream>
using namespace std;
int main()
{
    string str;
    cout <<"enter name str =";
    cin>>str;

    int length=str.length();
    int left =0;
    int right = length-1;

    while
    (left<right)
    {
      char temp = str[left];
      str [left] = str[right];
      str[right] =temp;

      left++;
      right--;


    }

    cout<<"reverese string is =" <<str<<endl;

    return 0;
}