#include<iostream>
using namespace std;

class Product
{
    private:
    int idcode;
    string name;
    double price;
    int stock;

    public:
    Product()
    {
        idcode=0;
        name="none";
        price=0.0;
        stock=0;
    }

    Product(int id, string pname, double p, int stoc)
    {
        idcode=id;
        name=pname;
        price=p;
        stock=stoc;
    }

    void setdata()
    {
        cout<<endl<<endl<<"_____________"<<endl;
        cout<<"Enter product code: ";
        cin>>idcode;
        cout<<"Enter Product name: ";
        cin>>name;
        cout<<"Enter Product Price: ";
        cin>>price;
        cout<<"Enter stocks of the Product: ";
        cin>>stock;
        cout<<"_____________";
    }

    void dispdata()
    {
        cout<<"Product Code: "<<idcode<<endl;
        cout<<"Product name: "<<name<<endl;
        cout<<"Product Price: Rs."<<price<<endl;
        cout<<"Inventory Stock: "<<stock<<endl;
    }
};

int main()
{
    int n , product_no;
    char y , x;

    cout<<"Enter the number of products ";
    cin>>n;
    
    Product prod[n];
    for(int i = 0 ; i < n ; i++)
    {
        cout<<endl<<"Details of Product "<<i+1<<endl;
        prod[i].setdata();
    }

    access:

    cout<<endl<<"Which product you want to access? ";
    cin>>product_no;

    prod[product_no-1].dispdata();

    cout<<"\nAny changes?(y/n)";
    cin>>y;
    if(toupper(y) == 'Y')
    {
        prod[product_no-1].setdata();
    }
    

    cout<<"Do you want to access details ?";
    cin>>x;
    if(toupper(x) == 'N')
    {
        return 0;
    }
    else
    {
        goto access;
    }
}