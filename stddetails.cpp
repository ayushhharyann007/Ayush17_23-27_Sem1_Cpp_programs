// C++ program to create class for a student

#include <iostream>
using namespace std;

class student {
private:
    char name[30];
    int rollNo;
    int total;
    float perc;
    int classs;
    char division;


public:
    //member function to get student's details
    void getStudentData(void);
    //member function to print student's details
    void DisplayStudentData(void);
};

//member function definition, outside of the class
void student::getStudentData(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter Class:";
    cin >> classs;
    cout << "Enter division:";
    cin >> division; 
    cout << "Enter total marks outof 500: ";
    cin >> total;

    perc = (float)total / 500 * 100;
}

//member function definition, outside of the class
void student::DisplayStudentData(void)
{
    cout << "Student details:\n";
    cout << "\nName: " << name;
    cout<< "\nRoll Number: " << rollNo;
    cout<< "\nClass: " << classs ;
    cout<< "\nDivision: " << division;
    cout<< "\nTotal: " << total;
    cout<< "\nPercentage: " << perc;
}

int main()
{
    student std; //object creation

    std.getStudentData();
    std.DisplayStudentData();

    return 0;
}