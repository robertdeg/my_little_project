#ifndef NAME_H
#define NAME_H

#include <string>
#include <vector>

class Name {
public:
    Name(const std::string& fullName);

    const std::vector<std::string>& first_names() const;
    const std::string& last_name() const;
    std::string full_name() const;

private:
    std::vector<std::string> first_names_;
    std::string last_name_;
};

#endif // NAME_H
