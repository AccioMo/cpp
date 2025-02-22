
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;

	public:
		/* constructors */
		Bureaucrat( );
		Bureaucrat( std::string const name, int grade );
		Bureaucrat( Bureaucrat const &other );
		~Bureaucrat( );

		Bureaucrat &operator=( Bureaucrat const &other );

		/* getters */
		std::string const	&getName() const;
		int					getGrade() const;

		/* setters */
		void				incrementGrade();
		void				decrementGrade();

		/* exceptions */
		class GradeTooHighException : public std::exception {
			const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char	*what() const throw();
		};

};

std::ostream	&operator<<( std::ostream &os, const Bureaucrat &bureaucrat );

#endif
