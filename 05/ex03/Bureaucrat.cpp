
#include "Bureaucrat.hpp"

/* constructors */

Bureaucrat::Bureaucrat( )
	: _name("default"),
	_grade(150)
{ }

Bureaucrat::Bureaucrat( std::string const name, int grade )
	: _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;

}

Bureaucrat::Bureaucrat( Bureaucrat const &other ) {
	if (other._grade > 150)
		throw GradeTooLowException();
	else if (other._grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = other._grade;
}

Bureaucrat::~Bureaucrat( ) { }


Bureaucrat &Bureaucrat::operator=( Bureaucrat const &other ) {
	if (this != &other) {
		if (other._grade > 150)
			throw GradeTooLowException();
		else if (other._grade < 1)
			throw GradeTooHighException();
		else
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
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void				Bureaucrat::decrementGrade() {
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}


/* exceptions */
const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade is too high.");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade is too low.");
}

std::ostream	&operator<<( std::ostream &os, const Bureaucrat &bureaucrat ) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (os);
}


void	Bureaucrat::signForm( AForm &form ) const {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} catch (const std::exception &e) {
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm( const AForm &form ) const {
	try {
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	} catch (const std::exception &e) {
		std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
