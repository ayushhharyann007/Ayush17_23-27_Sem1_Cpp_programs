// Design a C++ program that acts as a geometry calculator. Create a base class 'Geometry'
//with functions for calculating areas and perimeters of basic geometric shapes like circles, 
//rectangles, and triangles. Derive specialized classes like CircleGeometry, RectangleGeometry,
// and TriangleGeometry to implement these functions. The program should take user input for 
//selecting a shape and calculating its area or perimeter

#include <iostream>
using namespace std;

class Geometry{
    public:
      int width;
      int height;
      int radius;
      
      void SetWidth(int w)
      {
        width=w;
      }
      void SetHeight(int h)
      {
        height=h;
      }
      void SetRadius(int r)
      {
        radius=r;
      }
};

//derived classes
class TriangleGeometry: public Geometry{
    public:
      int GetTriArea(){
        //return(0.5* width*height);
        cout<<"Area of Triangle is: "<<0.5* width*height<< " units.";
        return 0;
      }
      int GetTriPeri(){
        int sidea;
        int sideb;
        cout<<"Enter length of the other 1st side: ";
        cin>>sidea;
        cout<<"Enter length of the other 1st side: ";
        cin>>sideb;
    // since side c would be width we would onky take in the value of the other two sides of the triangle
        cout<<"Permieter of Triangle is: "<< width+sidea+sideb<< " units."; 
        return 0;      
      }
};

class CircleGeometry : public Geometry{
    public:
      int GetCirArea(){
        cout<<"The Area of the Circle with radius: "<< radius << " is "<< 3.14*radius*radius<<" units.";
        return 0;
      }
      int GetCirPeri(){
        cout<<"The Perimeter of the Circle with radius: "<< radius << " is "<< 2*3.14*radius<<" units.";
        return 0;
      }
};

class RectangleGeometry : public Geometry{
    public:
      int GetRectArea(){
        //return(width*height);
        cout<<"The Area of the Rectangle is "<< width*height<<" units.";
        return 0;
      }
      int GetRectPeri(){
        cout<<"The Perimeter of the Rectangl is "<< 2*(height+width) <<" units.";
        return 0;
      }
      
};

int main(){
    
    RectangleGeometry Rect;
    TriangleGeometry Tri;
    CircleGeometry Cir;
    
    label:
    int choice;
    int w=0;
    int h=0;
    int r=0;
    int chose;
    char cont;
    cout<<"Enter width: ";
    cin>>w;
    cout<<"Enter length: ";
    cin>>h;
    cout<<"Enter Radius: ";
    cin>>r;


    cout<<"Enter your choice: (1.Rectangle) (2.Triangle) (3.Circle)";
    cin>>choice;

    switch (choice)
    {
    case 1:

        cout<<"Enter your choice: (1.Area) (2.Perimeter) ";
        cin>>chose;
        switch (chose)
        {
        case 1:
            Rect.SetWidth(w);
            Rect.SetHeight(h);
            //print area
            cout<<"Total area of Rectangle: "<<Rect.GetRectArea()<<endl;
            cout<<"Do you want to continue(y/n):";
            cin>>cont;
            if (cont==toupper('y')){
                goto label;
            }
            else{
                break;
            }
           
        case 2:
            Rect.SetWidth(w);
            Rect.SetHeight(h);
            //print perimeter
            cout<<"Total Perimeter of Rectangle: "<<Rect.GetRectPeri()<<endl;
            cout<<"  ";
            cout<<"Do you want to continue(y/n):";
            cin>>cont;
            if (cont==toupper('Y')){
               goto label;
            }
            else{
                break;
            }
        default:
            cout<<"Total area of Rectangle: "<<Rect.GetRectArea()<<endl;
            cout<<"Total Perimeter of Rectangle: "<<Rect.GetRectPeri()<<endl;
            break;
            }
          

    case 2:
        cout<<"Enter your choice: (1.Area) (2.Perimeter) ";
        cin>>chose;
        switch (chose)
        {
        case 1:
            Tri.SetWidth(w);
            Tri.SetHeight(h);
            //print area
            cout<<"Total area of triangle: "<<Tri.GetTriArea()<<endl;
            cout<<" ";
            cout<<"Do you want to continue(y/n):";
            cin>>cont;
            if (cont==toupper('Y')){
                goto label;
            }
            else{
                return 0;
            }
        case 2:
            Tri.SetWidth(w);
            Tri.SetHeight(h);
            //print perimeter
            cout<<"Total Perimeter of triangle: "<<Tri.GetTriPeri()<<endl;
            cout<<" ";
            cout<<"Do you want to continue(y/n):";
            cin>>cont;
            if (cont==toupper('Y')){
                goto label;
            }
            else{
                return 0;
            }
        }
           
    case 3:
        cout<<"Enter your choice: (1.Area) (2.Perimeter) ";
        cin>>chose;
        switch (chose)
        {
        case 1:
            Cir.SetWidth(w);
            Cir.SetHeight(h);
            //print area
            cout<<"Total Area of Circle: "<<Cir.GetCirArea()<<endl;
            cout<<" ";
            cout<<"Do you want to continue(y/n):";
            cin>>cont;
            if (cont==toupper('Y')){
                goto label;
            }
            else{
                return 0;
            }
        case 2:
            Cir.SetWidth(w);
            Cir.SetHeight(h);//print perimeter
            cout<<"Total Permimeter of Circle"<<Cir.GetCirPeri()<<endl;
            cout<<" ";
            cout<<"Do you want to continue(y/n):";
            cin>>cont;
            if (cont==toupper('Y')){
                goto label;
            }
            else{
                return 0;
            }
        default:
            cout<<"Total area of Circle: "<<Cir.GetCirArea()<<endl;
            cout<<"Total Perimeter of Circle: "<<Cir.GetCirPeri()<<endl;
            break;
        }
               
    default:
       Tri.SetWidth(w);
       Tri.SetHeight(h);
       //print area
       cout<<"Total area: "<<Tri.GetTriArea()<<endl;
       cout<<"Total perimeter: "<<Tri.GetTriPeri()<<endl;
       break;
    }
    
    return 0;
}