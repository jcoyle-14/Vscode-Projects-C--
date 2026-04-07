#include"course.h"
#include<iostream>
using namespace std;

void Course::addStudent(const Student& s){
    students.push_back(s);
    scores.push_back(-1);
}
void Course::addScore(int index, int score){
    if(index >= scores.size() || index < 0 || score < 0)
        return;
    scores[index] = score;
}
double Course::getAvg(){
    double avg = 0;
    int count = 0;
    for (int i = 0; i < scores.size(); i++){
        if(scores[i] >= 0){
            avg+= scores[i];
            count++;
        }
    }
    return avg / count;
}
void Course::print(){
    for(int i = 0; i < students.size(); i++){
        cout << students[i].getName() << endl;
        if(scores[i] < 0){
            cout << "No score\n";
        } else {
            cout << "Score: " << scores[i] << endl;
        }
    }
}