/* Player can fight enemies, rest, or quit... Nested loops to display enemy waves, and the game will end when the player wins, loses, or quits*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    enum GameState{PLAYING , WON, LOST, QUIT};
    GameState state = PLAYING;

    int health = 10, round = 1, score = 0;

    cout<<"Welcome to The Arena!\n\n";

    while(state == PLAYING){
        
        cout<<"\n------------\n";
        cout<<"Round: "<<round<<endl;
        cout<<"Health: "<<health<<endl;
        cout<<"Score: "<<score<<endl;

        int choice;

        cout<<"What would you like to do?"<<endl;
        cout<<"\n1. Fight\n";
        cout<<"\n2. Rest\n";
        cout<<"\n3. Quit\n";
        cout<<"Choose your path: ";
        cin>>choice;

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
            state = QUIT;
            break;

        default:
            cout<<"Invalid Choice!\n";
            continue;
        }
        if(health<= 0){
            state = LOST;
            break;
    }
    round++;

        if(round >5){
            state = WON;
            break;
    }
    }

    if(state ==WON){
        score += health *3;
    }
    cout<<"\n++++++++++++++++++++\n";
    switch (state){
        case WON:
            cout<<"You survived the arena!\n";
            break;
        case LOST:
            cout<<"You were defeated in the arena!\n";
            break;
        case QUIT:
            cout<<"You've quit the arena!\n";
            break;
    }
    
    cout<<"Final Score: "<<score<<endl;
}

