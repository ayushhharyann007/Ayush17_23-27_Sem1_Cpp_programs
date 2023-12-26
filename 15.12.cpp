#include<iostream>
using namespace std;
int main()
{
    int age;
    string season,name,gender;
    
    cout <<"what is your name ";
    cin>>name;
    cout <<"what's your gender ";
    cin>>gender;
    cout <<"what's your age ";
    cin>>age;
    cout <<"which season cloth you want ";
    cin>>season;
    // getline(cin,season);
    
    if(gender == "male"){

        if (season == "summer"){

        if (age<5){

            if (age<5){

                cout <<"frog";

        }else if (age<10){
                cout <<"only lower ";
        }else if(age<20){
                cout <<"casuals ";

        }else{
                cout <<"formal ";
        }


            
        }else if (age<10){
                 cout <<"frog ";
            if (age<5){
                cout <<"diaper ";

        }else if (age<10){
            cout <<"casuals ";

        }else if(age<20){
            cout <<"dennim ";

        }else{
            cout <<"formals ";

        }

        }else if(age<20){

            if (age<5){

        }else if (age<10){

        }else if(age<20){

        }else{

        }

        }else{

            if (age<5){

        }else if (age<10){

        }else if(age<20){

        }else{

        }
        }

    }else if (season=="winter"){

    }else if (season=="rainy"){

    }else {

    }

    }else if(gender == "female"){

        if (season == "summer"){

        if (age<5){

        }else if (age<10){

        }else if(age<20){

        }else{

        }

    }else if (season=="winter"){

        if (age<5){

        }else if (age<10){

        }else if(age<20){

        }else{

        }

    }else if (season=="rainy"){

        if (age<5){

        }else if (age<10){

        }else if(age<20){

        }else{

        }

    }else {
        
        if (age<5){

        }else if (age<10){

        }else if(age<20){

        }else{

        }
    }

    }

return 0;
    

    
}