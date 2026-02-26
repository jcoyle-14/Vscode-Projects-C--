// Arrays

#include <iostream>
#include<vector>
#include <string>
using namespace std;

int main(){

    int scores[4] = {5,6,7,8};//Size of the array, in the square value// static array, can't change it after it was created...
    cout<<"First score: "<<scores[0]<<endl;
    cout<<"Last score: "<<scores[3]<<endl;
    int total =0;
    //Vector
    
    vector<int>treasure;
    treasure.push_back(50);
    treasure.push_back(100);
    treasure.push_back(25);
    treasure.push_back(75);
    treasure.push_back(69);
    treasure.push_back(101);
    
    cout<<"First treasure: "<<treasure[0]<<endl;
    cout<<"Total items: "<<treasure.size()<<endl;

    //Iterations through a vector
    
    for(int i = 0; i < treasure.size(); i++){
        cout<<"Treasure "<< (i + 1)<<": "<<treasure[i]<<endl;
        total += treasure[i];
        cout<<"Running total: "<<total<<endl;
    }

    int choice;

    vector<string>names;
    names.push_back("Steve");
    names.push_back("Gold");
    names.push_back("Silver");
    names.push_back("Huskies");
    names.push_back("Bronze");
    names.push_back("Dog");

    

    cout<<"Enter what you would like to do: \n";
    cout<<"1. Add treasure,\n2. View treasure\n3. Total Value\n 0.Quit\nChoice: ";

    switch (choice)
    {
    case 1://Add treasure
        int value;
        cout<<"Enter a treasure value: ";
        cin>>value;
        treasure.push_back(value);
        break;
    case 2://View Treasure
        for(int i = 0; i < treasure.size(); i++){
            cout<<"Treasure name for treasure: "<<i+1<<" is "<<names[i]<<endl;
            cout<<"Treasure "<< (i + 1)<<": "<<treasure[i]<<endl;
        }
        break;
    case 3: //View the total treasure
        total = 0;
        for(int i = 0; i < treasure.size(); i++){
        total += treasure[i];
        }
        cout<<"Total Treasures: "<<total;
        break;
    case 4: //Quitting
        cout<<"You quit...";
        break;
    default:
        cout<<"Wrong choice";
        break;
    }
    

    
}