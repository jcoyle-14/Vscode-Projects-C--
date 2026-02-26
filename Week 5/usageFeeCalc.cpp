#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int hour=0, minute=0,dayType,users=0,totalEntries=0,freeEntries = 0, paidEntries = 0;
    char colon;
    double usageFee=0.0, finalFee=0.0, totalRevenue=0.0, loopRevenue =0.0;

    cout<<"\nEnter the type of day (0:Weekday,1:Weekend): ";
    cin>>dayType;

    cout<<endl;
    cout<<"Enter entry time (HH:MM): ";
    cin>>hour>>colon>>minute;

    cout<<"\nEnter the number of people (-1 to stop): ";
    cin>>users;

    if(dayType == 0){//Weekday
        if(hour<=7){
            usageFee = 1.25;
        }else if(hour>7 && hour<=10){
            usageFee = 3.50;
        }
        else if( hour > 10 && hour <=18){
            usageFee = 2.00;
        }
        else{
            usageFee = 1.25;
        }
    }
    else{//Weekends
        if(hour<9 || hour >=19){
            usageFee =2.50;
        }else{
            usageFee = 3.75;
        }
    }
    cout<<fixed<<setprecision(2);

    while(users != -1){
        //Input validation
        if(users<0){
            cout<<"Invalid number, try again";
            cout<<"Enter the number of people (-1 to stop): ";
            cin>>users;
            continue;
        }
        totalEntries ++;
        if(users >= 3 && dayType ==0 && hour>=8 && hour <=10){
            //Weekday morning group discount
            finalFee = usageFee *0.5;
            paidEntries ++;
        }
        else if(users >= 3&& dayType !=0){
            //Weekend group = free
            finalFee = 0.0;
            freeEntries ++;
        }
        else{
            finalFee = usageFee;
            paidEntries ++;
        }
        
        totalRevenue += finalFee;
        cout<<"Total Revenue: $"<<totalRevenue<<"|Amount of paid groups: "<<paidEntries<<"|Amount of free groups: "<<freeEntries<<endl;

        cout<<"\nEnter the number of people (-1 to stop): ";
        cin>> users;

    for(int i = 0; i< paidEntries; i++){
        cout<<"-----";
    }
    cout<<endl;
    for(int i = 0; i< paidEntries; i++){
        loopRevenue += usageFee;
    }
}
}
