
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string   _name;
        bool                _signed;
        const int           _signGrade;
        const int           _executeGrade;

    public:
        /* constructors */
        Form( );
        Form( const std::string &name, int signGrade, int execGrade );
        Form( const Form &other );
        ~Form( );

        Form &operator=( const Form &other );

        /* getters */
        std::string const   &getName() const;
        bool                isSigned() const;
        int                 getSignGrade() const;
        int                 getExecuteGrade() const;

        /* setters */
        void                beSigned( const Bureaucrat &bureaucrat);

        /* exceptions */
        class GradeTooHighException : public std::exception {
            const char   *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            const char   *what() const throw();
        };
};

std::ostream&   operator<<(std::ostream &os, const Form &form);

#endif
