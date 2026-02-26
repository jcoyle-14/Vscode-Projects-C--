#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Variables
    int hour, minute, numPeople;
    bool dayType;
    double rate;
    char colon = ':';

    cout<<"Enter the time of entry (HH:MM)"<<endl;
    cin>>hour>>colon>>minute;

    cout<<"Enter the number of people entering together: ";
    cin>>numPeople;

    cout<<"Enter day type, (0 = Weekday| 1 = Weekend): ";
    cin>>dayType;
    // Determining the fee
    if(dayType == 0){//Weekday rates
        if(hour >= 0  && hour <= 5){ // And = &&
            rate = 2.00;
        } else if(hour > 5 && hour <= 9){//Implies that hour is already greater than 7
            rate = 5.00;
        } else if(hour > 9 && hour <= 17){
            rate = 3.00;
        } else {
            rate = 2.50;
        }
    } else if(dayType != 0){
        if(hour < 8 ){
            rate = 1.00;
        } else if (hour >= 8 && hour <= 18){
            rate = 4.50;
        } else{
            rate = 3.00;
        }

        }
     if (numPeople >= 3){
        if (dayType ==0 && hour >= 7 && hour <= 9 && minute != 0){
            rate = rate * 0.5;
        }
    }
    //Output
    cout<<"Entry fee at ";
    if(hour == 0){
        cout<<"12:";
    } else if (hour<=12){
        cout<< hour<<":";
    } else{
        cout<< hour - 12 <<":";
    }

    cout<<setw(2)<<setfill('0')<<minute;

    if(hour<12){
        cout<<" am ";
    } else{
        cout<<" pm ";
    }

    cout<<"is $"<<fixed<<setprecision(2)<<rate<<" per person"<<endl;
}