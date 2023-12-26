/*#include <iostream>

using namespace std;

int main(){
    int arr[10] = {};
    int marks;

//to feed the values in the loop
    for (int i = 0 ; i < 10 ; i++){

        cout<<"Enter the marks of Roll No : "<<i+1<<"\n";
        cin>>marks;

        arr[i] = marks;
    }
 
    for (int i = 0 ; i<10 ; i++){
        cout<<"Marks of Roll No. "<<i+1<<" : " << arr[i]<<"\n";
    }

    return 0;
}*/
#include <iostream>
using namespace std;

int main() {

  int i, n,a;
  int arr[n];

  cout << "Enter total number of elements: ";
  cin >> n;

  // Store number entered by the user
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // Loop to store largest number to arr[0]
  for(i = 1;i < n; ++i) {
    a=arr[0] = arr[0]+arr[i];
    if(arr[0] < arr[i])
      arr[0] = arr[i];
     
    
  }
   for (i=1; i<n; ++i)
  cout << endl << "Largest element = " << arr[0];
  cout << endl << "Sum = " << a;
  return 0;
}