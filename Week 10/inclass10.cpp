#include <iostream>
#include <string>
using namespace std;

class Oven{
    public:
        void setTemperature(int t){
            targetTemp = safetyLimit(t);
        }

        void setCurrentTemperature(int t){
            currentTemp = safetyLimit(t);
        }
        void bake(){
            cout<<"Baking at "<< targetTemp<< " degrees."<<endl;
        }
        void heatingUp(){
            cout<<"The temperature difference between the current and target temperature is: "
            << tempDifference(currentTemp,targetTemp)<<endl;
        }
    private:
        int currentTemp, targetTemp;

        //Helper 
        int safetyLimit(int t){
            if(t > 500){
                return 500;
            }
            else if (t < 70){
                return 70;
            }
            else{
                return t;
            }
        }
        int tempDifference(int t1, int t2){
            if(t1 > t2){
                return t1 - t2;
            }
            else{
                return t2 - t1;
            }
        }
};