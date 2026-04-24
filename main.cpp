#include <iostream>
#include <string>

#include "Name.h"

int main() {
    std::cout << "Enter your full name: ";
    std::string input;
    std::getline(std::cin, input);

    Name name(input);

    std::cout << "Initials  : " << name.getInitials() << std::endl;
    std::cout << "First name: " << name.getFirstName() << std::endl;
    std::cout << "Full name : " << name.getFullName() << std::endl;
    std::cout << "Last name : " << name.getLastName() << std::endl;

    return 0;
}
