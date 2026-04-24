#include <iostream>
#include <stdexcept>
#include <string>

#include "name.h"

int main() {
    std::cout << "Enter your full name: ";
    std::string input;
    std::getline(std::cin, input);

    try {
        Name name(input);

        std::cout << "Initials  : " << "???" << std::endl;
        std::cout << "Full name : " << name.full_name() << std::endl;
        std::cout << "Last name : " << name.last_name() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
