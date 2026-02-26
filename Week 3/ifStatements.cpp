#include <iostream>
using namespace std;
int main(){
    int number;

    cout<< "Please enter a number: ";
    cin>> number;

    if (number > 0 ){
        cout << "The number is positive.";
    } else if(number == 0) {
        cout<< "The number is zero."<<endl;
    } else{
        cout<< "The number is negative.";
    }


    if (number >= 60){
        cout<< "You've passed."<<endl;
    } else {
        cout<< "Sorry, you have failed."<<endl;
    }

    /*Decision chains...*/
    if(number>=90){
        cout<<"Grade A"<<endl;
    } else if (number>=80){
        cout<<"Grade B"<<endl;
    } else if(number >= 70){
        cout<<"Grade C"<<endl;
    } else if (number >=60){
        cout<< "Grade D"<<endl;
    }else{
        cout<< "Grade F"<<endl;
    }


    cout << " The program is finished."<<endl;
}

