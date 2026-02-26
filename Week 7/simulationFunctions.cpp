#include <iostream>
#include <cstdlib>
using namespace std;

void PrintWelcome();//Declaring functions , Table of contents
void PrintStats(int health, int attack);
int choice();
int CalculateDamage(int attack, int defense);
bool CriticalHit();
int GetValidChoice();
void SwitchChoices(int choice, int round, int health, int score);


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
void SwitchChoices(int choice, int& round,int& health, int& score){
    switch (choice)
        {
        case 1: //Fight
            cout<<"\nBeware enemies are approaching!\n";
            
            for(int row = 0; row < round; row ++){
                for(int col = 0; col < 5; col ++){
                    cout<<"#";
                }
                cout<<endl;
            }
            {
                int dmg = rand()%4 +1;
                if(health <= 5){ //Critical Hit
                    dmg++;
                }
                health -= dmg;
                cout<<"You took "<<dmg<< " damage!\n";
                
            }
            score += 10;
            break;
        case 2: // Rest
            health += 2;
            score -= 5;
            cout<<"\nYou've recovered 2 health.\n";
            // Rest Score penalty
            break;
            
            
        case 3: // Quit
            cout<<"You quit...";
            break;

        default:
            cout<<"Invalid Choice!\n";
            continue;
        }
}