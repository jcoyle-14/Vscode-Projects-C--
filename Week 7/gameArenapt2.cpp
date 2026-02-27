#include <iostream>
#include <cstdlib>
using namespace std;
/*Rewrite game arena with more functions*/
void PrintWelcome();//Declaring functions , Table of contents
void PrintStats(int health, int attack);
int choice();
int GetValidChoice();
int CalculateDamage(int attack, int defense);
bool CriticalHit();
void DisplayMenu();
void DisplayChoosePrompt();
void DisplayDamage(int damage);
void DisplayNotCritical();
void DisplayFightMessage();
void DisplayRestMessage();
void DisplayQuitMessage();
void ApplyRest(int& health);
void DoFight(int attack, int defense);
void DoRest(int& health);
void DoQuit(int& running);

int main(){
    int health = 1, attack = 10, path, defense =5;
    int running = 1; //1 keep going , 0 = stop...
    
    PrintWelcome();
    
    while(running == 1){
        PrintStats(health, attack);
        int path = GetValidChoice();

        if(path ==1){
            DoFight(attack,defense);
        }
        else if (path == 2){
            DoRest(health);
        }
        else if (path == 3){
            DoQuit(running);
        }
    }
    return 0;
}

void PrintWelcome(){
    cout<<"Welcome to THE ARENA OF DEATH\n\n";
}

void PrintStats(int health, int attack){
    cout<<"Health: "<<health<<endl;
    cout<<"Attack: "<<attack<<endl;
}
void DisplayMenu(){
    cout<<"\n1. Fight\n";
    cout<<"2. Rest\n";
    cout<<"3. Quit\n";
}
void DisplayChoosePrompt(){
    cout<<"Choose your path: ";
}
void DisplayDamage(int damage){
    cout<<"Damage is: "<<damage<<endl;
}
void DisplayCriticalHit(){
    cout<<"That was a critical hit!";
}
void DisplayNotCritical(){
    cout<<"You are okay... for now.";
}
void DisplayFightMessage(){
    cout<<"\nYou Chose to FIGHT!\n";
}
void DisplayRestMessage(){
    cout<<"\nYou Chose to REST.\n";
}
void DisplayQuitMessage(){
    cout<<"\nYou Chose to QUIT. :(\n";
}
int choice(){
    int num;
    cin>>num;
    return num;
}
int CalculateDamage(int attack, int defense){

    int damage;
    damage = attack - (defense/2);
    if(damage < 0){
        damage = 0; 
    }

    return damage;
}
bool CriticalHit(){
    int roll = rand() %100;
    if(roll <20){
        return true;
    }
    return false;
}
int GetValidChoice(){
    int choice;
    do{
    cout<<"\n1. Fight\n";
    cout<<"\n2. Rest\n";
    cout<<"\n3. Quit\n";       
    cout<<"Choose your path: ";
    cin>>choice;
    }while(choice != 1 && choice != 2 && choice != 3);

    return choice;
}

void ApplyRest (int& health){
    health += 2;
}

void DoFight(int attack, int defense){
    DisplayFightMessage();

    int dmg1 = CalculateDamage(attack, defense);
    DisplayDamage(dmg1);

    int dmg2 = CalculateDamage(attack, defense);
    DisplayDamage(dmg2);

    if(CriticalHit()){
        DisplayCriticalHit();
    }
    else{
        DisplayNotCritical();
    }
}
void DoRest(int& health){
    ApplyRest(health);
    DisplayRestMessage();
}
void DoQuit(int& running){
    DisplayQuitMessage();
    running = 0;
}