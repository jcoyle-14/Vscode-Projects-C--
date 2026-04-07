#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {

    private: 
        string name;
        int id;
        static int totalStudents;

        bool validName(const string& name) const;
        bool validId(int id) const;

    public:
        Student();
        Student(string name, int id);


        string getName() const;
        int getId() const;

        void setName(string name);
        void setId(int id);

        void print() const;

        bool operator<(const Student& other) const{
            return id < other.id;
        }

};

#endif