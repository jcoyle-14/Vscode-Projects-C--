/*This program stores and prints students information and performs simple calculations*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //Declare variables...name, age, how many credits, gpa
     
    string studentName;
    int studentAge, creditsCompleted, remainingCredits, currentCredits,studentId;
    double studentGpa;
    

    //Assign values...
    cout << "Enter your First and Last name..."<<endl;
    getline(cin, studentName);
    cout<<"Enter your age..."<<endl;
    cin>> studentAge;
    cin.ignore();
    cout<< "Enter How many credits you've earned..."<<endl;
    cin>> creditsCompleted;
    cin.ignore();
    cout<< "Enter your Gpa..."<<endl;
    cin>> studentGpa;
    

    // Calculate Remaining credits...
    remainingCredits = 120 - creditsCompleted;
    
    //Print output...
    cout<< "Student info"<<endl;
    cout<<"--------------"<<endl;
    cout<< "Name: "<< studentName<<endl;
    cout<< "Age: "<<studentAge<<endl;
    cout<< "GPA: "<< studentGpa<<endl;
    cout<<"Credits Completed: "<< creditsCompleted<< endl;
    cout<<"Credits Remaining: "<< remainingCredits<< endl;

    // Try to prompt the user to get the info that you will output...
    /*Lab prompt- 1) add a feature that prints a student ID from input. 2) Create an If else statement to verify full time status.*/ 
    cout<< "Please enter Student ID #: "<<endl;
    cin>> studentId;
    cout<< "Thank you, "<<studentName<< ", your student ID is: "<< studentId<<endl;
    cout<< "Please enter how many credits you are currently taking: "<<endl;
    cin>> currentCredits;
    if (currentCredits >= 12){
        cout<< "You are a full time student."<<endl;
    } else{
        cout<< "You are not a full time student."<<endl;
    }


}