
#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern hired." << std::endl;
}

Intern::Intern(const Intern &other) {
    (void)other;
}

Intern::~Intern() {
    std::cout << "Intern fired." << std::endl;
}

Intern &Intern::operator=(const Intern &other) {
    (void)other;
    return *this;
}

static AForm *requestShrubbery(const std::string &target) {
    return (new ShrubberyCreationForm(target));
}

static AForm *requestRobotomy(const std::string &target) {
    return (new RobotomyRequestForm(target));
}

static AForm *requestPardon(const std::string &target) {
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target) const {
    const std::string formTypes[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *(*formPrinter[])(const std::string &) = {
        &requestShrubbery,
        &requestRobotomy,
        &requestPardon
    };

    for (size_t i = 0; i < 3; ++i) {
        if (formName == formTypes[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return formPrinter[i](target);
        }
    }

    throw UnknownFormException();
}

const char *Intern::UnknownFormException::what() const throw() {
    return "unknown form type.";
}
