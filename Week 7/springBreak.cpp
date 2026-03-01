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


/*Just needing to finish up main with user prompts*/
int main() {
    cout << "=== SPRING BREAK ZOMBIE SURVIVAL HELPER ===" << endl;
    printIntro();
    
    int days;
    cout<<"How many days were you at the beach?: "<<endl;
    cin>>days;

    int total = TotalZombies(days);
    cout<<"Total zombies seen: "<<total<<endl;

    double average = AverageZombie(days);
    cout<<"Average zombies per day: "<<average<<endl;

    double chance;
    cout<<"Estimated survival chance: "<<SurvivalChance(total);


    int behind;
    cout<<"How many zombies are behind you?: "<<endl;
    cin>>behind;

    /*Needs a checker for if you should run or not*/
    if (ShouldRun(behind)){
      Warn();
    }
    else{
      cout<<"You are safe for now..."<<endl;
    }
    

    return 0;
}

void printIntro(){
  cout<<"\nYou were hoping for a relaxing spring break at the beach..."<<endl;
  cout<<"But suddenly, zombie outbreak sirens start blaring!!"<<endl;
  cout<<"You decide to track zombie sightings and estimate your chance of survival."<<endl;
  cout<<"Lets begin!\n"<<endl;
}

double AverageZombie(int days) { //Finding avg zombie
  int total = 0;
  for(int i =0; i< days; ++i){
    int zombies = rand() %10;
    total += zombies;
  }
  
  return(double)total / days;
  
}
int totalZombies(int days) { //Increment total zombies randomly
  int total = 0;

  for(int i =0; i <days; i++){
    int zombie = rand() %10;
    total += zombie;
  }
  return total;
}

double SurvivalChance(int total){// Determine survival chance
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

bool ShouldRun(int zombiesBehindYou){ // determining whether or not to run from the amount of zombies
  if(zombiesBehindYou > 3){
    return true;
  }
  else{
    return false;
  }
}

void Warn(){
  cout<<"RUN! The zombies are catching up to you!"<<endl;
}