/*
    Spring Break Zombie Survival Helper
    -----------------------------------
    Topic: User-Defined Functions (Week 7–8)
    Concepts:
      - Function declarations (prototypes)
      - Function definitions
      - Parameters and return values
      - Void (print) functions
      - Functions with branches (if/else)
      - Functions with loops
      - Simple "unit test" style checking

    Story:
      It's Spring Break. Everything was fun until...
      a zombie outbreak started on the beach.

      This program helps the user estimate:
        - average zombies seen per day
        - danger rating based on zombie sightings
        - total zombies over several days
        - a rough "survival chance" percentage
        - bool ShouldRun(int zombiesBehindYou)
        - void Warn() → prints a dramatic message
*/
#include <iostream>
using namespace std;

// Function declarations go here...
void printIntro();
double AverageZombie(int days);
int TotalZombies(int days);
double SurvivalChance(int total);
bool ShouldRun(int zombiesBehindYou);
void Warn();



int main() {
    cout << "=== SPRING BREAK ZOMBIE SURVIVAL HELPER ===" << endl;
    printIntro();
    
    int days;
    int total;
    double chance;
    int behind;


    

    return 0;
}

void printIntro(){
  cout<<"\nYou were hoping for a relaxing spring break at the beach..."<<endl;
  cout<<"But suddenly, zombie outbreak sirens start blaring!!"<<endl;
  cout<<"You decide to track zombie sightings and estimate your chance of survival."<<endl;
  cout<<"Lets begin!\n"<<endl;
}

double AverageZombie(int days) {
  int total = 0;
  for(int i =0; i< days; ++i){
    int zombies = rand() %10;
    total += zombies;
  }
  
  return(double)total / days;
  
}
int totalZombies(int days) {
  int total = 0;

  for(int i =0; i <days; i++){
    int zombie = rand() %10;
    total += zombie;
  }
  return total;
}

double SurvivalChance(int total){
  if(total < 10){
    return 90.0;
  }
  if(total <30){
    return 67.0;
  }
  else{
    return 33.0;
  }
}
