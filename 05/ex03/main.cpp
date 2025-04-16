#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    std::cout << "--- Intern Tests ---" << std::endl;

    Intern someRandomIntern;

    AForm* rrf;
    try {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;
        delete rrf;
    } catch (const std::exception& e) {
        std::cerr << "Error creating robotomy request: " << e.what() << std::endl;
    }

    AForm* scf;
    try {
        scf = someRandomIntern.makeForm("presidential pardon", "Zaphod");
        std::cout << *scf << std::endl;
        delete scf;
    } catch (const std::exception& e) {
        std::cerr << "Error creating presidential pardon: " << e.what() << std::endl;
    }

    AForm* ppf;
    try {
        ppf = someRandomIntern.makeForm("shrubbery creation", "home");
        std::cout << *ppf << std::endl;
        delete ppf;
    } catch (const std::exception& e) {
        std::cerr << "Error creating shrubbery creation: " << e.what() << std::endl;
    }

    AForm* unknownForm;
    try {
        unknownForm = someRandomIntern.makeForm("make coffee", "office");
        std::cout << *unknownForm << std::endl;
        delete unknownForm;
    } catch (const Intern::UnknownFormException& e) {
        std::cerr << "Caught expected exception: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught unexpected exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- Intern and Bureaucrat Interaction Tests ---" << std::endl;

    Bureaucrat boss("Boss", 1);

    AForm* internForm1 = someRandomIntern.makeForm("shrubbery creation", "backyard");
    if (internForm1) {
        boss.signForm(*internForm1);
        boss.executeForm(*internForm1);
        delete internForm1;
    }

    AForm* internForm2 = someRandomIntern.makeForm("robotomy request", "HAL9000");
    if (internForm2) {
        boss.signForm(*internForm2);
        boss.executeForm(*internForm2);
        delete internForm2;
    }

    AForm* internForm3 = someRandomIntern.makeForm("presidential pardon", "criminal");
    if (internForm3) {
        boss.signForm(*internForm3);
        boss.executeForm(*internForm3);
        delete internForm3;
    }

    try {
        AForm* internForm4 = someRandomIntern.makeForm("clean the office", "all");
        if (internForm4) {
            boss.signForm(*internForm4);
            boss.executeForm(*internForm4);
            delete internForm4;
        }
    } catch (const Intern::UnknownFormException& e) {
        std::cerr << "Intern couldn't create form for boss: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
    }

    return 0;
}