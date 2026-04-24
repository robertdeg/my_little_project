#include "name.h"

#include <sstream>
#include <stdexcept>

Name::Name(const std::string& fullName) {
    std::istringstream stream(fullName);
    std::vector<std::string> parts;
    std::string word;
    while (stream >> word) {
        parts.push_back(word);
    }

    if (parts.size() < 2) {
        throw std::invalid_argument("A full name must contain at least a first name and a last name.");
    }

    last_name_ = parts.back();
    for (std::size_t i = 0; i + 1 < parts.size(); ++i) {
        first_names_.push_back(parts[i]);
    }
}

const std::string& Name::last_name() const {
    return last_name_;
}

std::string Name::full_name() const {
    return first_names_.front() + ' ' + last_name_;
}
