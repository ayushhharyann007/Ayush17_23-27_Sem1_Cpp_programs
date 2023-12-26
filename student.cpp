#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    string clgname;
    string rollno;
    string name;
    int marks;

    public:
    Student()
    {
        clgname="";
        rollno="";
        name="";
        marks=0;
    }
    Student(string cn, string rn, string n, int m)
    {
        clgname=cn;
        rollno=rn;
        name=n;
        marks=m;
    }

    void setData()
    {
        cout<<"Enter Clg name - ";
        cin>>clgname;
        cout<<"Enter Roll number - ";
        cin>>rollno;
        cout<<"Enter name - ";
        cin>>name;
        cout<<"Enter marks - ";
        cin>>marks;
    }
    void displaydata()
    {
    cout<<clgname<<endl;
    cout<<rollno<<endl;
    cout<<name<<endl;
    cout<<marks<<endl;
    }
};
int main()
{
    int n,studnum;
    char y , x;

    cout<<"Enter the number of students you want to input data for: ";
    cin>>n;
    Student stud[n];
    for(int i = 0 ; i < n ; i++)
    {
        cout<<endl<<"Enter details of "<<i+1<<"st student: "<<endl;
        stud[i].setData();
    }

    access:
    cout<<endl<<"Which student do you want to access? ";
    cin>>studnum;

    stud[studnum-1].displaydata();

    cout<<"\nAny changes?(y/n)";
    cin>>y;
    if(toupper(y) == 'Y')
    {
        stud[studnum-1].setData();
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