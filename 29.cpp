// find largest number in a array using for loop

#include <iostream>
using namespace std;

int main()
{
    int lenght;

    cout<<"enter the number";
    cin>>lenght;

    int arr[lenght];

    for(int i=0; i<lenght; i++)
    {
        cout<<"enter the value :";
        cin>>arr[i];
    }

    int largest=0;


    for (int i=0; i<lenght; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout<<"\nlargest : "<<largest;
    
}