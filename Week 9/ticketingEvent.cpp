#include <iostream>
#include "ticketing.h"

double calculatePrice(double basePrice, double fee){
    //Error checking
    if(basePrice < 0 )
        return 0;

    double total = basePrice + fee;
    return total;
}

//Overload function...

double calculatePrice(double basePrice, string vipTier){
    if(vipTier == "Backstage")
        return basePrice + 500.0;
      
    if(vipTier == "FrontRow")
        return basePrice + 200.0;

    return basePrice; //Standard rate

}

bool isValidSection(int section){
    return (section >= 100 && section <= 500); // Shortcut
}