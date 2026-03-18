#include <iostream>
#include<string>
using namespace std;

class RunnerInfo{
    public: 
        void setTime(int timeRunSecs){
            if(isValid(timeRunSecs))
                timeRun = timeRunSecs;
        }
        void setDist(double distRunMiles){
            if(isValid(distRunMiles))
                distRun = distRunMiles;
        }
        double getSpeedMph();
    private:
        int timeRun;
        double distRun;

        //Private Helper Function
        bool isValid(double val){return val >=0;}
};



double RunnerInfo::getSpeedMph(){
    return distRun / (timeRun / 3600.0); //Hidden Logic, This is abstraction...
}

int main(){
    RunnerInfo runner1, runner2;
    runner1.setTime(360);
    runner2.setTime(350);

    runner1.setDist(1.2);
    runner2.setDist(1.3);

    cout<<"Runner1 speed:" <<runner1.getSpeedMph()<<" MPH"<<endl;
    cout<<"Runner2 speed: "<<runner2.getSpeedMph()<<" MPH"<<endl;
    
    return 0;
}