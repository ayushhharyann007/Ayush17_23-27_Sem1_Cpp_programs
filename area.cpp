// inheritance first practical 16 oct 2023

#include <iostream>
using namespace std;

class Shape{
    public:
      int width;
      int height;
      void SetWidth(int w)
      {
        width=w;
      }
      void SetLength(int h)
      {
        height=h;
      }
};

//derived class

class Triangle: public Shape{
    public:
      int GetTri(){
        return(0.5* width*height);
      }
};

class Square : public Shape{
    public:
      int GetSq(){
        return(width*width);
      }
};
class Circle : public Shape{
    public:
      int GetCir(){
        return(3.14*width*width);
      }
};

class Rectangle : public Shape{
    public:
      int GetArea(){
        return(width*height);
      }
};
int main(){
    Rectangle Rect;
    Triangle Tri;
    Circle Cir;
    Square Sq;
    
    int choice;
    int w;
    int h;
    cout<<"Enter width: ";
    cin>>w;
    cout<<"Enter length: ";
    cin>>h;

    cout<<"Enter your choice: (1.Rectangle)(2.Triangle)(3.Circle)(4.Square) ";
    cin>>choice;

    switch (choice)
    {
    case 1:
   
        Rect.SetWidth(w);
        Rect.SetLength(h);
        //print area
        cout<<"Total area: "<<Rect.GetArea()<<endl;
        break;    
    
    case 2:
       Tri.SetWidth(w);
       Tri.SetLength(h);
       //print area
       cout<<"Total area: "<<Tri.GetTri()<<endl;
       break;
    
    case 3:
       Cir.SetWidth(w);
       Cir.SetLength(h);
       //print area
       cout<<"Total area: "<<Cir.GetCir()<<endl;
       break;

    case 4:
       Sq.SetWidth(w);
       Sq.SetLength(h);
       //print area
       cout<<"Total area: "<<Sq.GetSq()<<endl;
       break;
    
    
    default:
       Tri.SetWidth(w);
       Tri.SetLength(h);
       //print area
       cout<<"Total area: "<<Tri.GetTri()<<endl;
       break;;
    }

    

    return 0;
}