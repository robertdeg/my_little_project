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

std::string Name::getInitials() const {
    std::string initials;
    for (const auto& name : first_names_) {
        if (!name.empty()) {
            initials += name[0];
            initials += '.';
        }
    }
    return initials;
}

std::string Name::getFirstName() const {
    std::string result;
    for (std::size_t i = 0; i < first_names_.size(); ++i) {
        if (i > 0) {
            result += ' ';
        }
        result += first_names_[i];
    }
    return result;
}

std::string Name::getLastName() const {
    return last_name_;
}

std::string Name::getFullName() const {
    return getFirstName() + ' ' + last_name_;
}
