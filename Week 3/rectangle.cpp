/*Rectangle area and perimeter Calculator*/
#include <iostream>
#include <cmath>
#include <iomanip> //used for formatting decimals
using namespace std;
const double SCALE_FACTOR = 2.0;
int main(){
    //Declare Variables
    double height, width, area, perimeter, diagonal,halfArea;
    
    //Program Header...
    cout<< "Rectangle Calculator"<<endl;
    cout<< "--------------------"<<endl;


    //Prompt the user for width...
    cout<<"Enter the width of the rectangle"<<endl;
    cin>>width;

    cout<<"Enter the height of the rectangle"<<endl;
    cin>>height;
    cout<<endl; 

    //Perform Calculations
    area = width * height;
    perimeter = 2*(width + height);
    diagonal = sqrt(pow(width,2) + pow(height,2));
    halfArea = area / SCALE_FACTOR;

    //Format outputs to 2 decimal places...
    cout<<fixed<<setprecision(2);
    //Display Results
    cout<<"Results"<<endl;
    cout<<"-------"<<endl;
    cout<<"Width: "<<width<<endl;
    cout<<"Height: "<<height <<endl;
    cout<<"Area: "<< area<<endl;
    cout<< "Perimeter: "<< perimeter<<endl;
    cout<<"Diagonal length: "<<diagonal<<endl;
    cout<<"Half the area: "<<halfArea<<endl;

    if(width == height){
        cout<<"This rectangle is actually a square."<<endl;
    } else {
        cout<<"This rectangle is not a square."<<endl;
    }
    cout<<endl<<"Calculations completed!";

}
