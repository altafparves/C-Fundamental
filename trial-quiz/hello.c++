#include <iostream>
#include <string>

void printGreeting(const std::string& input) {
    std::cout << "Hello " << input << "!" << std::endl;
}

int main() {
    std::string input;
    std::cin >> input;
    printGreeting(input);
    return 0;
}