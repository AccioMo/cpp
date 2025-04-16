#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    std::cout << "--- ShrubberyCreationForm Tests ---" << std::endl;
    try {
        Bureaucrat signer1("Signer1", 137);
        Bureaucrat executor1("Executor1", 137);
        ShrubberyCreationForm form1("garden");
        std::cout << form1 << std::endl;
        signer1.signForm(form1);
        executor1.executeForm(form1);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n--- RobotomyRequestForm Tests ---" << std::endl;
    try {
        Bureaucrat signer2("Signer2", 45);
        Bureaucrat executor2("Executor2", 45);
        RobotomyRequestForm form2("Bender");
        std::cout << form2 << std::endl;
        signer2.signForm(form2);
        executor2.executeForm(form2);
        executor2.executeForm(form2);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n--- PresidentialPardonForm Tests ---" << std::endl;
    try {
        Bureaucrat signer3("Signer3", 5);
        Bureaucrat executor3("Executor3", 5);
        PresidentialPardonForm form3("Zaphod");
        std::cout << form3 << std::endl;
        signer3.signForm(form3);
        executor3.executeForm(form3);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n--- Subclass Exception Tests ---" << std::endl;
    try {
        Bureaucrat lowSigner("LowSigner", 150);
        Bureaucrat lowExecutor("LowExecutor", 150);
        ShrubberyCreationForm form4("another_garden");
        lowSigner.signForm(form4);
        lowExecutor.executeForm(form4);
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat highSigner("HighSigner", 1);
        Bureaucrat lowExecutor("LowExecutor", 138);
        ShrubberyCreationForm form5("yet_another_garden");
        highSigner.signForm(form5);
        lowExecutor.executeForm(form5);
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}