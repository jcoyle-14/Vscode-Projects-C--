#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
string name;
int age;
char desiredGrade;

cout<< "Enter your name\n";
cin>> name;

cout<< "Enter your age\n";
cin>> age;

cout<< "What grade do you hope to recieve in this class?\n";
cin>> desiredGrade;

cout << "----Student info----\n";
cout <<"Name: "<< name << endl;
cout <<"Age: "<< age << endl;
cout <<"Desired Grade: "<< desiredGrade<< endl<<endl;
return 0;
}