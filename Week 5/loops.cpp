#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int hour, minute,dayType,users,totalEntries,freeEntries = 0, paidEntries = 0;
    char colon;
    double usageFee, finalFee, totalRevenue, maintenanceFee = 0;

    //Get some input from user
    cout<<"Enter day type(0=weekday,1=weekend): ";
    cin>>dayType;

    cout<<"Enter entry time (HH:MM): ";
    cin>>hour>>colon>>minute;

    if(dayType == 0){//Weekday
        if(hour<=6){
            usageFee = 1.50;
        }else if(hour>6 && hour<=9){
            usageFee = 3.75;
        }
        else if( hour > 9 && hour <=17){
            usageFee = 2.25;
        }
        else{
            usageFee = 1.50;
        }
    }
    else{//Weekends
        if(hour<8 || hour >20){
            usageFee =2.00;
        }else{
            usageFee = 3.25;
        }
    }

    cout<<fixed<<setprecision(2);
    cout<<"\nBase usage fee: $"<<usageFee<<endl;

    // While Loops...
    // Sentinel controlled loop, meaning: going to loop over a few lines until condition is true
    cout<<"\nEnter the number of people (-1 to stop): ";
    cin>>users;

    while(users != -1){
        //Input validation
        if(users<0){
            cout<<"Invalid number, try again";
            cout<<"Enter the number of people (-1 to stop): ";
            cin>>users;
            continue;
        }
        totalEntries ++;//Same as totalEntries +=1; ++ is C++ syntax
        //Conditional logic
        if(users >= 3 && dayType ==0 && hour>=7 && hour <=9){
            //Weekday morning group discount
            finalFee = usageFee *0.5;
            paidEntries ++;
        }
        else if(users >= 3&& dayType !=0){
            //Weekend group = free
            finalFee = 0.0;
            freeEntries ++;
        }
        else if(users == 1 || users == 2){
            //Small groups pay full price
            finalFee = usageFee;
            paidEntries ++;
        }
        else{
            finalFee = 0.0;
            freeEntries ++;
        }

        totalRevenue += finalFee;

        //Outputs..
        cout<<"Users: "<<users<<"|Fee charges: $"<<finalFee<<"| Running total: $"<<totalRevenue<<endl;

        cout<<"\nEnter number of people (-1 to stop): ";
        cin>>users;
    }
    //For Loops...
    for(int i = 0; i <40; i++){
        cout<<"=";
    }
    cout<<endl;
    cout<<"Session summary\n";
    cout<<"Total entries processed: "<<totalEntries<<endl;
    cout<<"Paid Entries: "<<paidEntries<<endl;
    cout<<"Free Entries: "<<freeEntries<<endl;

    cout<<"Paid entries Bar: ";
    for(int i =0; i < paidEntries; i++){
        cout<<"#";
    }
    cout<<endl;
    cout<<"Free entries Bar: ";
    for(int i = 0; i < freeEntries; i ++){
        cout<<"*";
    }

    //Maintenance fee add 1 dollar fee for every paid entry..
    for(int i = 1; i <= paidEntries; i += 1 ){
        maintenanceFee++;//If you start with 1 use <=, if you start with 0 use <...

    }
    cout<<"\nMaintenance Fee: $"<<maintenanceFee<<endl;
    cout<<"\nTotal Revenue collected: $"<<totalRevenue<<endl;

}