#include <iostream>
#include "Student.h"
using namespace std;

int Student::totalStudents = 0;

Student::Student() : name("Unknown"), id(0){
    totalStudents = totalStudents +1;
}

Student::Student(string newName, int newId) : name("Unknown"), id(0){
    setName(newName);
    setId(newId);
    totalStudents = totalStudents +1;
}


bool Student::validName(const string& newName) const{
    if(newName.empty()){
        return false;
    }
    else{
        return true;
    }
}

bool Student::validId(int newId) const{
    if(newId < 0){
        return false;
    }
    else{
        return true;
    }
}

string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}

void Student::setName(string newName) {
    if (validName(newName)) {
        name = newName;
    }
    else {
        name = "Invalid Name";
    }
}

void Student::setId(int newId) {
    if (validId(newId)) {
        id = newId;
    }
    else {
        id = 0;
    }
}

void Student::print() const{
    cout<<"Student: "<<name<<" (ID: "<<id<<")";
}
