
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
    : AForm("PresidentialPardonForm", 25, 5), _target("default_target") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other.getName(), other.getSignGrade(), other.getExecuteGrade()), _target(other._target) {
    *this = other;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        this->_target = other._target;
    }
    return *this;
}

std::string const &PresidentialPardonForm::getTarget() const {
    return _target;
}

void PresidentialPardonForm::beExecuted() const {
    std::cout << _target << " received a presidential pardon from Donald Tru- I mean Zaphod Beeblebrox." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& form) {
    os << "PresidentialPardonForm: " << form.getName() << ", target: " << form.getTarget();
    return os;
}
