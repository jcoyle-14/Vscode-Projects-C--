#include <iostream>
#include <string>
using namespace std;

class Roster {
private:
    string* names;
    int size;
    int capacity;
public:
    Roster() {
        capacity = 2;
        size = 0;
        names = new string[capacity];
    }

    void add(string name) {
        if (size == capacity) {
            int newCapacity = capacity * 2;
            string* newNames = new string[newCapacity];

            for (int i = 0; i < size; i++) {
                newNames[i] = names[i];
            }

            delete[] names;
            names = newNames;
            capacity = newCapacity;
        }
        names[size] = name;
        size++;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            return;
        }
        for (int i = index; i < size - 1; i++) {
            names[i] = names[i + 1];
        }

        size--;
    }

    void print() const {
        for (int i = 0; i < size; i++) {
            cout << i << ": " << names[i] << endl;
        }
    }

    ~Roster() {
        delete[] names;
    }
};

int main() {
    Roster r;

    r.add("Joe");
    r.add("Mia");
    r.add("Alex");

    r.print();

    cout << endl;
    r.remove(1);
    r.print();
    return 0;
}