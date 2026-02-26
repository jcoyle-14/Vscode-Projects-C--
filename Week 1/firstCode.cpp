/* use a star for multiline comments
This is a programing for printing hello world
*/
#include<iostream>;
using namespace std;

int main(){
    cout << "Hello World!";
    cout<< endl;
    cout<< endl;
    //Next I want to add two numbers...
    cout<< "This program will add, multiply, and divide two numbers together.";
    cout<<endl;
    int num1;
    int num2;
    cout<<endl;
    cout<<"Enter num1: ";
    cin >> num1;
    cout<<"Enter num2: ";
    cin>>num2;

    //This is the addition part of the programming...
    int sum;
    sum = num1 + num2;
    cout<<endl;

    cout << "Sum of the two numbers: ";
    cout << sum;
    // This is the multiplication part of the program...
    
    cout<<"\nProduct of the two numbers is "<<num1*num2;
    cout<<endl;
    // This is the division part of the program...
    int div;
    div = num1/num2;
    cout<< "\nQuotient of the two numbers is: "<< div;
}