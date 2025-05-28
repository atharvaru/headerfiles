#include <iostream>
#include <string>
#include <random> 
#include "communication.h"
#include "discount.h"


std::string greeting(std::string& name) {
    return "Hello " + name + "! Welcome to Comquest!";
}

void formatAddress(std::string* address) {
    for ( int i = 0; i < (*address).size(); i++) {
        (*address)[i] = toupper((*address)[i]);
    }
}
//  extra 
int generateRandomTime() {
    srand(time(0)); 
    return rand() % 61; 
}

std::string closing( std::string& product) {
    return "We hope you enjoy your " + product + "";
}

