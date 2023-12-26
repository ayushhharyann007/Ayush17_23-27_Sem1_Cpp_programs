// read and print student information for btech admission
#include <iostream>
#include <string>
using namespace std;

class GetDetails{
    
    protected:
      string name;
      float Physics;
      float Chemistry;
      float Maths;
      float CSE;
      float Average;

    public:
      int id;
      void SetDetails(){
        cout<<"Enter Student name: ";
        cin>>name;
        
        cout<<"Enter Student ID no.: ";
        cin>>id;

        cout<<"Enter marks for Physics: ";
        cin>>Physics;

        cout<<"Enter marks for Chemistry: ";
        cin>>Chemistry;

        cout<<"Enter marks for Maths: ";
        cin>>Maths;

        cout<<"Enter marks for CSE: ";
        cin>>CSE;

        Average=(Physics+Chemistry+Maths+CSE)/4;
      }
      void checkEligibility(){
        if (Average>=75){
            cout<<"Your student "<< name <<" is eligible for admission! "; 
        }
        else{
            cout<<"Your student "<< name <<" is not eligible for admission! "; 
        }
      }
};

class Btech_CSE : public GetDetails{
  public:
  void checkEligibility(){
    string name;
        if (Average>=90 && Average<=100){
            cout<<"Your student "<< name <<" is eligible for admission! "; 
        }
        else{
            cout<<"Your student "<< name <<" is not eligible for admission! "; 
        }
      }
};

class Btech_ECE : public GetDetails{
  public:
  void checkEligibility(){
    int Average;
    string name;
        if (Average>=85 && Average<=100){
            cout<<"Your student "<< name <<" is eligible for admission! "; 
        }
        else{
            cout<<"Your student "<< name <<" is not eligible for admission! "; 
        }
      }
};

class Btech_Mech : public GetDetails{
  public:
  void checkEligibility(){
    int Average;
    string name;
        if (Average>=80 && Average<=100){
            cout<<"Your student "<< name <<" is eligible for admission! "; 
        }
        else{
            cout<<"Your student "<< name <<" is not eligible for admission! "; 
        }
      }
};
class Btech_Civil : public GetDetails{
  public:
  void checkEligibility(){
    int Average;

    string name;
        if (Average>=70 && Average<=100){
            cout<<"Your student "<< name <<" is eligible for admission! "; 
        }
        else{
            cout<<"Your student "<< name <<" is not eligible for admission! "; 
        } 
      }
};

int main(){
  int n , id , stream , csn = 0 , civn  = 0 , elecn  = 0, mechn = 0;
    char y;

    cout<<"How many data you want to enter : ";
    cin>>n;


    cout<<"\nWhich Stream you want to check for (1.cse , 2.Mechanical , 3.Electrical , 4.Civil) : ";
    cin>>stream;
    switch(stream){
        case 1:
            csn = n;
        case 2:
            mechn = n;
        case 3:
            elecn = n;
            
        case 4:
            civn = n;

        default:
            break;
            
    }

    Btech_Civil civ[civn];
    Btech_CSE cs[csn];
    Btech_ECE elec[elecn];
    Btech_Mech mech[mechn];


    switch(stream){
        case 1:
            for(int i = 0 ; i < n ; i ++){
                cout<<"\nEnter student "<<i+1<<" Details : \n";
                cs[i].SetDetails();
            }
            break;
        case 2:
           for(int i = 0 ; i < n ; i ++){
                cout<<"\nEnter student "<<i+1<<" Details : \n";
                mech[i].SetDetails();
            }
            break; 
        case 3:
            for(int i = 0 ; i < n ; i ++){
                cout<<"\nEnter student "<<i+1<<" Details : \n";
                elec[i].SetDetails();
            }
            break;
        case 4:
            for(int i = 0 ; i < n ; i ++){
                cout<<"\nEnter student "<<i+1<<" Details : \n";
                civ[i].SetDetails();
            }
            break;
        default:
            break;
    }

    label:
    cout<<"Which Student you want to check (ID)? ";
    cin>>id;

    switch(stream){
        case 1:
            for(int i = 0 ; i < n ; i ++){
            if(id == cs[i].id ){
                cs[i].checkEligibility();
            }
            }
            break;
        case 2:
           for(int i = 0 ; i < n ; i ++){
            if(id == cs[i].id ){
                mech[i].checkEligibility();
            }
            }
            break; 
        case 3:
            for(int i = 0 ; i < n ; i ++){
            if(id == cs[i].id ){
                elec[i].checkEligibility();
            }
            }
            break;
        case 4:
            for(int i = 0 ; i < n ; i ++){
            if(id == cs[i].id ){
                civ[i].checkEligibility();
            }
            }
            break;
        default:
            break;
    }
    

    cout<<"\nYou want to check another student eligiblity? ";
    cin>>y;

    if(toupper(y) == 'Y'){
        goto label;
    }

    cout<<"Want to rerun?";
    cin>>y;

    if(toupper(y) == 'Y'){
        return main();
    }
    return 0;
}