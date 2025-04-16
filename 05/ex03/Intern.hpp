
#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
    public:
        /* constructors */
        Intern( );
        Intern( const Intern &other );
        ~Intern( );

        /* operators */
        Intern &operator=( const Intern &other );

        /* methods */
        AForm *makeForm( const std::string &name, const std::string &target ) const;

        /* exceptions */
        class UnknownFormException : public std::exception {
            public:
                const char      *what() const throw();
        };
};

#endif
