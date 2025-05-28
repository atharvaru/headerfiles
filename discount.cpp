#include <iostream>
#include <string>
#include "communication.h"
#include "discount.h"

double welcomeDiscount(double price) {
    return price * 0.9; 
}
double loyaltyDiscount(double price) {
    if (price <= 100.0) {
        return price - (price * 0.25);
    }
    return price;
}

double secret (double price) {
    return price * 0.8; 
}
