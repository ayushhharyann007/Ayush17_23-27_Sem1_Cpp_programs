#include <iostream>
using namespace std;

void areatriangle(float x, float y, float area){
    
    area=0.5 * x * y;

    cout<< "Area of triangle is: "<< area << endl;

}

void areaofcircle(float r, float areacircle){
     
    areacircle= 3.14* r*r;

    cout<< "Area of circle is: "<< areacircle<< endl;
     
}

int main(){
    float b,h,a,area,areacircle, choice;

    cout<<"Area of circle(1) or triangle(2): ";
    cin>> choice;
    if (choice==1){
        cout<<"Enter base length(triangle): "<< endl;
    cin>>b;

    cout<<"Enter height length(triangle): "<< endl;
    cin>>h;

    areatriangle(b,h,area);
    }
    else{
        cout<<"Enter radius length: "<< endl;
    cin>>a;
    
    areaofcircle(a,areacircle);
    }



    return 0;
}