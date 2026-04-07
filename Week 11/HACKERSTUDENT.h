#ifndef HACKERSTUDENT_H
#define HACKERSTUDENT_H
#include<iostream> 
#include<string>
using namespace std;

class HackerStudent
{


private:

string name;
int id; 
static totalStudents; 

bool validName(const string& name) const;
bool validId(int id) const;


public:
Student();
Student(string name, int id);

createInvalidStudent(string name, int id){
    id = id * -1;
    for(int i; i < name.size(); i++){
        name.at[i] = ' ';
    }
}

string GetName() const;
int  GetId() const;
void setName(string name);
void setId(int id);
void print() const;

bool operator<(const Student& other) const{
            return id < other.id;
        }

};


#endif