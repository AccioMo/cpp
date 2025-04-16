
#include "AForm.hpp"

AForm::AForm()
    : _name("piece of cake"), _signed(false), _signGrade(150), _executeGrade(150) {}

AForm::AForm(const std::string &name, int signGrade, int execGrade)
    : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
    : _name(other.getName()), _signed(other.isSigned()), 
    _signGrade(other.getSignGrade()), _executeGrade(other.getExecuteGrade()) {}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm &other) {
    if (this != &other) {
        this->_signed = other._signed;
    }
    return *this;
}

const std::string& AForm::getName() const {
    return _name;
}

bool AForm::isSigned() const {
    return _signed;
}

int AForm::getSignGrade() const {
    return _signGrade;
}

int AForm::getExecuteGrade() const {
    return _executeGrade;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_signGrade)
        throw GradeTooLowException();
    _signed = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "grade is too high.";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "grade is too low.";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "form is not signed.";
}

void    AForm::execute( Bureaucrat const &executor ) const {
    if (!this->_signed)
        throw FormNotSignedException();
    if (executor.getGrade() > this->_executeGrade)
        throw GradeTooLowException();
    this->beExecuted();
}

std::ostream& operator<<(std::ostream &os, const AForm &form) {
    os << "AForm: " << form.getName()
       << "\n Signed: " << (form.isSigned() ? "Yes" : "No")
       << "\n Sign Grade: " << form.getSignGrade()
       << "\n Execution Grade: " << form.getExecuteGrade();
    return os;
}