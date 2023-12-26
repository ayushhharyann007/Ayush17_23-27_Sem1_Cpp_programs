#include <iostream>
using namespace std;

class Person
{
    string name;
    string age;

    public:
    void getdata()
    {
        cout<<"Enter the your name : ";
        cin>>name;
        cout<<"Enter your age : ";
        cin>>age;
    }

    void displaydata()
    {
        cout<<" name is : "<<name<<endl;
        cout<<" age is : "<<age<<endl;
    }

   
};

class Student:public Person
{
   int student_id;
   double Cgpa;

   public:
   void GetStudent()
   {
        getdata();
        cout<<"Enter your student id : ";
        cin>>student_id;
        cout<<"Enter the cgpa you havee obtained : ";
        cin>>Cgpa;
   }

   void displaystudent()
   {
        displaydata();
        cout<<"Student id is : "<<student_id<<endl;
        cout<<"The CGPA obtained by the student is : "<<Cgpa<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
   }
   
};


class Professor:public Person
{
    int Employe_id;
    string subject;
     
    public:
    void getprof()
    {
        getdata();

        cout<<"Enter your Employee id : ";
        cin>>Employe_id;
        cout<<"Enter the subject you are teaching : ";
        cin>>subject;
    }

    void displayprof()
    {
        displaydata();
        cout<<"The employee id is :"<<Employe_id<<endl;
        cout<<"The primary subject of the professor is : "<<subject<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
    }
};


int main()
{
    cout<<"-------------------Welcome to the management application--------------------------------------"<<endl;
    Student s1;
    Professor p1;
    
   
        while (true)
        {
            cout<<"What is your profession?"<<endl;
            cout<<" 1] Student  "<<endl;
            cout<<" 2] Professor  "<<endl;
            cout<<" 3] Exit The application "<<endl;
        

            cout<<"Choose 1] if you are a student"<<endl;
            cout<<"choose 2] if you are a Professor"<<endl;
            cout<<"Choose 3] to exit the application"<<endl;
            

            int choice;
            cin>>choice;
            
                switch(choice)
            {
                
                case 1:
                s1.GetStudent();
                s1.displaystudent();
                break;


                case 2:
                p1.getprof();
                p1.displayprof();
                break; 

                case 3:
                goto end;
                
            }
        }
         
        
    end:
    cout<<"Thanks for using the application "<<endl;
    cout<<"Have a nice day  🤗🤗";
    

    return 0;
}