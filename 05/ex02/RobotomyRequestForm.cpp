
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
    : AForm("RobotomyRequestForm", 72, 45), _target("default_target") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other.getName(), other.getSignGrade(), other.getExecuteGrade()), _target(other._target) {
    *this = other;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        this->_target = other._target;
    }
    return *this;
}

std::string const& RobotomyRequestForm::getTarget() const {
    return _target;
}

void RobotomyRequestForm::beExecuted() const {
    static int rob = 0;
    std::cout << "*drilling noises*" << std::endl;
    if (rob % 2 == 0) {
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed for " << _target << "." << std::endl;
    }
    rob++;
}

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& form) {
    os << "RobotomyRequestForm: " << form.getName() << ", target: " << form.getTarget();
    return os;
}
