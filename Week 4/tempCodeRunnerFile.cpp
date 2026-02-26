#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int hour, minute,customerAge;
    double rate;
    bool dayType;
    char colon = ':';

    cout<<"Enter the time of the show (HH:MM)"<<endl;
    cin>>hour>>colon>>minute;

    cout<<"Enter the age of the person going to the movie: ";
    cin>>customerAge;

    cout<<"Enter day type, (0 = Weekday| 1 = Weekend): ";
    cin>>dayType;

    if(dayType == 0){//Weekday rates
        if(hour < 17){ 
            rate = 5.50;
        } else if(hour >= 17 && hour <= 20 ){
            rate = 11.00;
        } else{
            rate = 7.50;
        }
    } else if(dayType != 0){
        if(hour < 17 ){
            rate = 7.50;
        } else if (hour >= 17 && hour <= 20){
            rate = 12.50;
        } else{
            rate = 9.50;
        }

    }
    if (customerAge < 12){
        rate *= 0.80;// 20% off
    } else if (customerAge >= 65){
        rate *= 0.65;//35% off
    }
    cout<<fixed<<setprecision(2);

    cout<<"Show Time: ";
    if(hour == 0){
        cout<<"12:";
    } else if (hour<=12){
        cout<< hour<<":";
    } else{
        cout<< hour - 12 <<":";
    }
    cout<<setw(2)<<setfill('0')<<minute;

    if(hour<12){
        cout<<" am "<<endl;
    } else{
        cout<<" pm "<<endl;
    }
    
    cout<< "Day type: ";
    if (dayType ==0){
        cout<< "Weekday"<<endl;
    }else{
        cout<<"Weekend"<<endl;
    }
    cout<<"Customer age: "<<customerAge<<endl;
    cout<<"Final ticket price: $"<<rate<<endl;

    return 0;
}