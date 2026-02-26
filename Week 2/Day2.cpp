#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){

// 2.15 Strings
    /*string fullName,firstName;
    cout<< "\nPlease enter your first name: ";
    cin >> firstName;

    cout<<"\nYour first name using cin is: "<< firstName;
    //cin leaves a newline character that needs to be removed...
    cin.ignore();//this is important to use if you use a getline after a cin...

    cout<< "\n\nPlease enter your full name: ";
    getline(cin,fullName);

    cout<< "\n\nYour full name is: "<< fullName;

// 2.16 integer overflow
    //int maxInt = 2147483647; //maximum value for 32 bit int if you add anything to this it will create an overflow error...

    int age = 20;
    double gpa = 3.75;
    char grade = 'A';
    bool isEnrolled = true;*/

// 2.17 Unsigned 
    unsigned int score = 10;
   // cout<< "\nScore: "<< score<<endl;

//2.19 Random Number
    srand(time(0)); // Seed random number generator (do this once)
    int randomNumber = rand() % 200 + 1 ;
    //cout<< "\nRandom Number: "<< randomNumber << endl;

//2.20 Debugging
    int x = 5, y = 0;
    //cout<< x/y<<endl;

//2.21 auto(C++)
    auto totalCredits = 15; //int
    auto tuition = 3000.55; //double
    auto status = true; //bool

//2.22 Style Guidelines
    // - Use meaningful variable names 
    // - One statement per line
    // - Consistent indentation
    // - Useful comments

/* Salary Calculation //

    //Variables
    string employeeName;
    int hoursWorked;
    
    double hourlyWage;
    double employeePay;


    

    //Prompts
    cout<< "\nWelcome to the salary calculator\n\n";
    cout<<"\nPlease enter the full name of the employee: ";
    getline(cin,employeeName);
    cout<<endl;
    cout<<"\nHow many hours did they work? \nHours:  ";
    cin>>hoursWorked;
    cout<< "\nHourly wage? \nWage: ";
    cin>> hourlyWage;
    cout<< endl<<endl;
    employeePay = hoursWorked * hourlyWage; 

    cout<< "Name of the employee: "<<employeeName<<endl;
    cout<<"Hours worked: "<<hoursWorked<<" Hours"<<endl;
    cout<<"Hourly wage: $"<<hourlyWage<<endl;
    cout<<"Weekly salary: $"<<employeePay<<endl;
    cout<<"Thank you for using the salary calculator!"<<endl;



    //Calculations
    employeePay = hoursWorked * hourlyWage; */
//

//Challenge activity// 

    //Variables
    string userName;
    int userAge;

    string friend1Name, friend2Name,friend3Name;
    int friend1Age, friend2Age, friend3Age;

    //Ask for the Users name 
    cout<<"Please enter your name: "<<endl;
    getline(cin, userName);
    //and age
    cout<< "Please enter your age: "<<endl;
    cin >> userAge;
    cin.ignore();

    //Friend 1
    cout<< "\nEnter the name of friend 1: ";
    getline(cin,friend1Name);
    cout<< "Enter their age: ";
    cin>> friend1Age;
    cin.ignore();

    //Friend 2
    cout<< "\nEnter the name of friend 2: ";
    getline(cin,friend2Name);
    cout<< "Enter their age: ";
    cin>> friend2Age;
    cin.ignore();

    //Friend 3
    cout<< "\nEnter the name of friend 3: ";
    getline(cin,friend3Name);
    cout<< "Enter their age: ";
    cin>> friend3Age;

    //Output
    cout<< "Hello "<< userName<<"!"<<" You are "<<userAge<<" years old."<<endl;
    cout<< "The names of your three friends are: "<<endl<<endl;

    cout << "Name: "<<friend1Name<<"\nAge: "<<friend1Age<<endl<<endl;

    cout << "Name: "<<friend2Name<<"\nAge: "<<friend2Age<<endl<<endl;
    cout << "Name: "<<friend3Name<<"\nAge: "<<friend3Age<<endl<<endl;
}
