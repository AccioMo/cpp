
#include "Bureaucrat.hpp"

/* constructors */

Bureaucrat::Bureaucrat( )
	: _name("default"),
	_grade(150)
{ }

Bureaucrat::Bureaucrat( std::string const name, int grade )
	: _name(name),
	_grade(grade)
{ }

Bureaucrat::Bureaucrat( Bureaucrat const &other ) {
	this->_grade = other._grade;
}

Bureaucrat::~Bureaucrat( ) { }


Bureaucrat &Bureaucrat::operator=( Bureaucrat const &other ) {
	if (this != &other) {
		this->_grade = other._grade;
	}
	return *this;
}


/* getters */
std::string const	&Bureaucrat::getName() const {
	return this->_name;
}

int					Bureaucrat::getGrade() const {
	return this->_grade;
}


/* setters */
void				Bureaucrat::incrementGrade() {
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void				Bureaucrat::decrementGrade() {
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}


/* exceptions */
const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade is too high. nerf the bitch.");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade is too low. tkays, you're gonna kill him.");
}

std::ostream	&operator<<( std::ostream &os, const Bureaucrat &bureaucrat ) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
