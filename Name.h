#ifndef NAME_H
#define NAME_H

#include <string>
#include <vector>

class Name {
public:
    explicit Name(const std::string& fullName);

    std::string getInitials() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getFullName() const;

private:
    std::vector<std::string> firstNames;
    std::string lastName;
};

#endif // NAME_H
