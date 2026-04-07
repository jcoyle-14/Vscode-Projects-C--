#include <iostream>
#include <cstring>
#include <memory>
#include <string>
using namespace std;

class Student {
private:
    char* name;
    int id;
public:
    Student(const char* n, int i) {
        id = i;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    ~Student() {
        cout << "Destroying " << name << endl;
        delete[] name;
        name = nullptr;
    }
    Student(const Student& other) {
        id = other.id;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }
    Student& operator=(const Student& other) {
        if (this == &other) {
            return *this;
        }
        delete[] name;

        id = other.id;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);

        return *this;
    }
    void Print() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class SmartStudent {
public:
    string name;
    int id;
    SmartStudent(string n, int i) {
        name = n;
        id = i;
    }

    void Print() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    cout << "Rule of Three demo:" << endl;
    Student s1("Alice", 101);
    Student s2("Bob", 102);

    s1.Print();
    s2.Print();

    cout << "\nCopy constructor demo:" << endl;
    Student s3 = s1;
    s3.Print();

    cout << "\nCopy assignment demo:" << endl;
    s2 = s1;
    s2.Print();

    cout << "\nUnique pointer demo:" << endl;
    unique_ptr<SmartStudent> p1 = make_unique<SmartStudent>("Charlie", 201);
    p1->Print();

    unique_ptr<SmartStudent> p2 = move(p1);
    if (p1 == nullptr) {
        cout << "p1 no longer owns the object." << endl;
    }
    p2->Print();

    cout << "\nShared pointer demo:" << endl;
    shared_ptr<SmartStudent> p3 = make_shared<SmartStudent>("Dana", 202);
    shared_ptr<SmartStudent> p4 = p3;

    p3->Print();
    p4->Print();
    cout << "Shared count: " << p3.use_count() << endl;

    return 0;
}