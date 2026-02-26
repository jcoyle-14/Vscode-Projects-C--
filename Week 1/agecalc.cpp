// This program will calculate your age in 2 years from now...

// I need current age, and a formula to calculate the new age 

#include<iostream>
using namespace std;

int main(){
    int age;
    int futureage;

    cout << "Enter your current age in years: ";
    cin>> age;

    futureage = age +2;
    cout<< "In 2 Years your age will be "<< futureage<<" years old."<<endl;

    return 0;
}
