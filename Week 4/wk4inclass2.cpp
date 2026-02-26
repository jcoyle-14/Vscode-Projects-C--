#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    //Task 1 - username check
    string userName;
    cout<< "Enter your Username: "<<endl;
    cin>> userName;
    bool isUserValid = (userName.find("admin")!= string::npos);
    int pos = userName.find("admin");

    if(pos != string::npos){
        cout<<"Username is valid."<<endl;
    }else{
        cout<<"Username isn't valid."<<endl;
    }

    //Task 2 - sensor check
    double temperature;
    double expectedTemp = 25.0;
    cout<<"Enter temp: "<<endl;
    cin>> temperature;
    bool isTempAcceptable = (fabs(temperature - expectedTemp)<=0.05);

    if(fabs(temperature -expectedTemp)<=0.05){
        cout<<"Reading is acceptable"<<endl;
    }else{
        cout<<"Reading is not acceptable"<<endl;
    }

    //Task 3 - Boolean logic short circuit

    if(isUserValid && isTempAcceptable){
        cout<<"System Authorized"<<endl;
    }else{
        cout<<"Access Denied"<<endl;
    }

    return 0;
}