#ifndef TICKETING_H //has to be all caps
#define TICKETING_H

#include<string>
using namespace std;
double calculatePrice(double basePrice, double fee = 10.0);

double calculatePrice(double basePrice, string vipTier);

bool isValidSection(int section);  

void purchaseTicket(double &wallet, double price = 25.0);

void purchaseTicket(double &wallet, int quantity, double price);

#endif