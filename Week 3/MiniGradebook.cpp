#include <iostream>
#include <iomanip>
using namespace std;
const double HOMEWORK_WEIGHT = .40;
const double MIDTERM_WEIGHT = .25;
const double FINAL_WEIGHT = .35;

int main(){
    //Variables
    int hw1,hw2,hw3,midtermExam,finalExam;
    double homeworkAvg, finalGrade;
    //Prompt the user for homework scores...
    cout<< "Enter your scores for homework going from 1-3..."<<endl;
    cin>>hw1;
    while (hw1 < 0 || hw1 > 100) {
        cout << "Invalid score. Enter homework 1 score (0-100): ";
        cin >> hw1;
    }
    cin>>hw2;
    while (hw2 < 0 || hw2 > 100) {
        cout << "Invalid score. Enter homework 2 score (0-100): ";
        cin >> hw2;
    }
    cin>>hw3;
    while (hw3 < 0 || hw3 > 100) {
        cout << "Invalid score. Enter homework 3 score (0-100): ";
        cin >> hw3;
    }
    //Prompt the user for exam scores...
    cout<< "Please enter your midterm exam score: "<<endl;
    cin>>midtermExam;

    while (midtermExam < 0 || midtermExam > 100){
        cout<< "Invalid score. Please enter a score inbetween 0 & 100 for midterm exam: ";
        cin>> midtermExam;
    }
    cin>>midtermExam;
    cout<<"Please enter your final exam score: "<<endl;
    cin>>finalExam;
    while (finalExam <0 || finalExam > 100){
        cout<< "Invalid score. Please enter a value between 0-100 for final exam: ";
        cin>>finalExam;
    }
    

    //Compute hw avg...
    homeworkAvg = (hw1 +hw2 +hw3)/3.0;
    cout<< "Homework avg: "<<homeworkAvg<<endl;

    //Calculate final grade
    finalGrade = (homeworkAvg *HOMEWORK_WEIGHT)+ (midtermExam *MIDTERM_WEIGHT)+ (finalExam*FINAL_WEIGHT);

    //Output the results...
    cout<< " Your Grades"<<endl;
    cout<<"---------------"<<endl;
    cout<<"Your Homework scores: "<<hw1<<", "<<hw2<<", "<<hw3<<"."<<endl;
    cout<<"Homework Avg score: "<< homeworkAvg<<endl;
    cout<<"Midterm Exam score: "<< midtermExam<<endl;
    cout<< "Final Exam score: "<< finalExam<<endl;
    cout<< "Final course grade: "<< finalGrade<<endl;



}
