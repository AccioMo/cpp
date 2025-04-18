
#include "Form.hpp"

Form::Form()
    : _name("piece of cake"), _signed(false), _signGrade(150), _executeGrade(150) {}

Form::Form(const std::string &name, int signGrade, int execGrade)
    : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other)
    : _name(other.getName()), _signed(other.isSigned()), 
    _signGrade(other.getSignGrade()), _executeGrade(other.getExecuteGrade()) {}

Form::~Form() {}

Form& Form::operator=(const Form &other) {
    if (this != &other) {
        this->_signed = other._signed;
    }
    return *this;
}

const std::string& Form::getName() const {
    return _name;
}

bool Form::isSigned() const {
    return _signed;
}

int Form::getSignGrade() const {
    return _signGrade;
}

int Form::getExecuteGrade() const {
    return _executeGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_signGrade)
        throw GradeTooLowException();
    _signed = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "grade is too low.";
}

std::ostream& operator<<(std::ostream &os, const Form &form) {
    os << "Form: " << form.getName()
       << "\n Signed: " << (form.isSigned() ? "Yes" : "No")
       << "\n Sign Grade: " << form.getSignGrade()
       << "\n Execution Grade: " << form.getExecuteGrade();
    return os;
}