#include <iostream>
using namespace std;

double area1(double r){
    return 3.14*r*r;
}

double area2(double b, double h){
    return 0.5*b*h;
}

double area3(double b, double h){
    return b*h;
}

int main(){
    double r,b,h;
    double area_of;
    int choice;

    cout<<"Enter which shape's area you want"<<endl;
    cout<< "1)Triangle\n2)Circle\n3)rectangle"<<endl;
    cin>>choice;
    if(choice == 1)
    {
        cout<<"Enter height";
        cin>>h;
        cout<<"Enter base";
        cin>>b;
        area_of=area2 (b,  h);
        cout<<"Area of triangle ="<<area_of;

    }
    else if(choice ==2){
        cout<<"Enter radius";
        cin>>r;
        area_of=area1(r);
        cout<<"Area of circle ="<<area_of;
    }

    
    else if(choice ==3)
    {
        cout<<"Enter height";
        cin>>h;
        cout<<"Enter base";
        cin>>b;
        area_of=area3(b,h);
        cout<<"Area of rectangle ="<<area_of;
    }
    return 0;
}