#include <iostream>
#include "C:\Users\joeyc\OneDrive - Minnesota State\Vscode Projects C++\Week 9\ticketing.h"
#include "ticketingEvent.cpp"
#include "Ticketing.cpp"

int main(){
    cout<< "---Campus Festival Ticketing---"<<endl;

    double general = calculatePrice(50.0); // Will use the first function since, it has a default parameter
    cout<<"General Admission: $"<<general<<endl;
    //Test function overload
    double vip = calculatePrice(50.0, "FrontRow");
    cout<<"VIP Admission: $"<<vip<<endl;

    //Test error checking
    int userSection = 99;
    if(!isValidSection(userSection)){
        cout<<"Error: Section "<< userSection<<", isn't a valid section"<<endl;
    }
    
    double myWallet = 100.0;
    purchaseTicket(myWallet);
    cout<<"Balance: "<<myWallet<<endl;

    purchaseTicket(myWallet, 3, 20.0);
    cout<<"Balance: "<<myWallet<<endl;
    

    return 0;
}

