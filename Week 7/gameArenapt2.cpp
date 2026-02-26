#include <iostream>
#include <cstdlib>
using namespace std;
/*Rewrite game arena with more functions*/
void PrintWelcome();//Declaring functions , Table of contents
void PrintStats(int health, int attack);
int choice();
int CalculateDamage(int attack, int defense);
bool CriticalHit();
int GetValidChoice();

int main(){
    int health = 1, attack = 10, path, defense =5;
    
    
    PrintWelcome();
    PrintStats(health, attack); //when you call a function dont add data types
    path = choice();
    cout<<"Damage is: "<<CalculateDamage(attack,defense);
    cout<<"Damage is: "<<CalculateDamage(23,14);
    if(CriticalHit()){
        cout<<"That was a critical hit!";
    }
    else{
        cout<<"You are okay... for now";
    }
}

void PrintWelcome(){
    cout<<"Welcome to THE ARENA OF DEATH\n\n";
}

void PrintStats(int health, int attack){
    cout<<"Health: "<<health<<endl;
    cout<<"Attack: "<<attack<<endl;
}
int choice(){
    int num;
    cout<<"\n1. Fight\n";
    cout<<"\n2. Rest\n";
    cout<<"\n3. Quit\n";       
    cout<<"Choose your path: ";
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