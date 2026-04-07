#include <iostream>
using namespace std;

class Student{
    public: 
        string name;
        int id;
        Student(string n, int i): name(n), id(i){}
        void print() const{
            cout<<name<<"(ID: " <<id<<")"<<endl;
        }

};



int main(){

    int n = 3;
    Student* s = new Student("Alice", 101);

    s->print();
    cout<<s->name<<endl;
    cout<<(*s).id;

    delete s; //only need square brackets for an array

    Student* roster = new Student[n]{
        Student("Alice", 101),
        Student("Bob", 102),
        Student("Joe", 103)
    };

    for(int i =0; i<n; ++i){
        roster[i].print();
    }

    delete[] roster;
//     int n;
//     int size = 0, capacity = 2;
//     double input;

//     cout<< "How many scores?";
//     cin>>n;

//     double* scores = new double[n+1]; //star means your storing a new variable

//     for(int i =0; i<n; ++i){
//         cout<<"Enter score:"<<i+1<<":";
//         cin>>scores[i];
//     }

//     for(int i = 0; i< n; ++i){
//         cout<<"Scores["<<i<<"]="<<scores[i]<<endl;
//     }

//     double* newArray = new double[n+1];

//     for(int i = 0; i<0; ++i){
//         newArray[i] = scores[i];
//     }

//     scores = newArray;
//     n+=1;

//     cout<<"Enter the bonus score: ";
//     cin>>scores[n-1];

//     while(cin>>input && input >=0){
//         if(size == capacity){
//             capacity*=2; //Increasing capacity
//             double* newArray = new double[capacity];// creating new pointer
//             for(int i = 0; i<0; ++i){ // Copying from old pointer to new pointer
//                 newArray[i] = scores[i];
//             }
//             delete[] scores; //Deleting old array
//             scores = newArray; //Assigning old pointer to new pointer
//         }
//         scores[size] = input;
//         size++; //Updating size variable for while loop
//     } //Critical, have to delete the memory used, be careful you dont want to delete the data before you use it
}