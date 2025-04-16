
#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string   _name;
        bool                _signed;
        const int           _signGrade;
        const int           _executeGrade;

    public:
        /* constructors */
        AForm( );
        AForm( const std::string &name, int signGrade, int execGrade );
        AForm( const AForm &other );
        virtual ~AForm( );

        AForm &operator=( const AForm &other );

        /* getters */
        std::string const   &getName() const;
        bool                isSigned() const;
        int                 getSignGrade() const;
        int                 getExecuteGrade() const;

        /* setters */
        void                beSigned( const Bureaucrat &bureaucrat);
        virtual void        beExecuted( ) const = 0;
        void                execute( Bureaucrat const &executor ) const;

        /* exceptions */
        class GradeTooHighException : public std::exception {
            public:
                const char      *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char      *what() const throw();
        };
        
        class FormNotSignedException : public std::exception {
            public:
                const char      *what() const throw();
        };
};

std::ostream&   operator<<(std::ostream &os, const AForm &Aform);

#endif
