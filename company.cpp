// Atharva U
// 5/19
// Compamy
// Extra: shiping time
#include <iostream>
#include <string>
#include "communication.h"
#include "discount.h"

int main() {
    
    std::cout << "Comquest"<<std::endl;
    
   
    std::string name, address, product;
    std::string coupon;
    double price = 0.0;
    
 
    std::cout << "Enter customer name: "  << std::endl;
    std::getline(std::cin, name);
    
    std::cout << "Enter street address: " << std::endl;
    std::getline(std::cin, address);
    
// extra 
    std::cout << "Enter product purchased: "  << std::endl;
    std::getline(std::cin, product);
    

    std::cout << "Enter product price: $"  << std::endl;
    std::cin >> price;

    std::cout << "Enter coupon code: " << std::endl;
    std::cin.ignore(); 
    std::getline(std::cin, coupon);
    
  
    std::cout << "\n=== Receipt ===\n\n";
    
    
    std::cout << greeting(name)  << std::endl;
    
  
    formatAddress(&address);
    // etxra is shipping time
    std::cout << "Shipping to: " << address << " In " << generateRandomTime() << " days" << std::endl;
    
    
    double finalPrice = price;
    
    if (coupon == "WELCOME10") {
        finalPrice = welcomeDiscount(price);
        std::cout << "Applied WELCOME10 discount!" << std::endl;
    } 
    else if (coupon == "LOYALTY25") {
        finalPrice = loyaltyDiscount(price);
        std::cout << "Applied LOYALTY25 discount!"  << std::endl;
    }
    else if (coupon == "Minecraft"){
        finalPrice = secret(price);
        std::cout<< "Applied Secret Discount" << std::endl;
    }
    
    std::cout << "Original Price: $" << price << "\n";
    std::cout << "Final Price: $" << finalPrice  << std::endl;
    

    std::cout << closing(product) << std::endl;;
    
    return 0;
}
