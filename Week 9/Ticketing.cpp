#include <iostream>
#include "ticketing.h"

void purchaseTicket(double &wallet, double price){
    if(wallet < price)
        cout<<"Transaction Declined";
        return;

    wallet = wallet - price;

}

void purchaseTicket(double &wallet , int quantity, double price){
    double total = quantity * price;
    if(wallet < total)
        cout<< "Transaction Declined";
        return;

    wallet = wallet - total;
}