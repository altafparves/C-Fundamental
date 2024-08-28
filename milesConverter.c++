#include <iostream>

double convertMileToKilometer(double mile) {
    double kilometer = mile * 1.60934;
    return kilometer;
}

int main() {
    double mile;
    std::cout << "Enter distance in miles: ";
    std::cin >> mile;
    
    double kilometer = convertMileToKilometer(mile);
    std::cout << mile << " miles is equal to " << kilometer << " kilometers." 
    << std::endl;
    
    return 0;
}
