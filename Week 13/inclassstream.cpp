#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    istringstream inSS;
    string line;
    string name, firstName, lastName;
    int age;
    bool inputDone;

    inputDone = false;

    //Prompt the user...

    cout<< "Enter your first name, last name, and age:";
    cout<<"(\"Exit\"as firstname exits)."<<endl<<endl;

    while(!inputDone){
        //Enter the line into the string line...
        getline(cin,line);
        cout<<endl;

        inSS.clear();
        inSS.str(line);

        //Process the first name...
        inSS>> firstName;

        //Parse first name value...
        if(firstName == "Exit"){
            cout<<"Exiting"<<endl;
            inputDone = true;
        }
        else{
            inSS>> lastName;
            inSS>> age;

            cout<<firstName<<" "<<lastName<<" is "<<age<<" years old"<<endl;

        }
    
    }
}