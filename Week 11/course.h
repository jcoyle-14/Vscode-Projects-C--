#ifndef CLASS_H
#define CLASS_H
#include <string>
#include <vector>
#include "Student.h"
using namespace std;
class Course{
    public:
    Course(Student s, int score){
        students.push_back(s);
        scores.push_back(score);
    }
    Course(Student s){
        students.push_back(s);
        scores.push_back(-1);
    }
    void addStudent(const Student& s);
    void addScore(int index, int score);
    double getAvg();
    void print();

   
    private:
    string name;
    vector<Student> students;
    vector<int> scores;

};
#endif