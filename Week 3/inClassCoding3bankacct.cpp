#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int pin = 1234;
    double acctBalance;
    double withdrawlAmount;

    cout<< "Please enter your PIN: ";
    cin>> pin;
    while (pin != 1234){
        cout<<"Incorrect Pin!"<<endl;
        cout<<"Please Try again."<<endl;
        cout<< "Please enter your PIN: ";
        cin>>pin;
    } 

    cout<<"Please Enter account balance: ";
    cin>> acctBalance;

    if (acctBalance < 100){
        cout<< "Warning! Account balance is below $100."<<endl;
    }

    cout<< "Please enter the amount you would like to withdraw: ";
    cin>> withdrawlAmount;


   
    if (pin == 1234){
        cout<< "Account Balance: "<<acctBalance<<endl;
    } if(withdrawlAmount >= acctBalance){
        cout<<"Not enough money in balance to complete withdrawl."<<endl;
    }
     if (withdrawlAmount <= 0){
        cout<<"Please enter a positive value that you'd like to withdraw.";
    }
    }