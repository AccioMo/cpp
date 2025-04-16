
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
    : AForm("ShrubberyCreationForm", 145, 137), _target("default_target") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other.getName(), other.getSignGrade(), other.getExecuteGrade()), _target(other._target) {
    *this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        this->_target = other._target;
    }
    return *this;
}

std::string const &ShrubberyCreationForm::getTarget() const {
    return _target;
}

void ShrubberyCreationForm::beExecuted() const {
    std::ofstream file((_target + "_shrubbery").c_str());
    if (!file.is_open()) {
        std::cerr << "error: could not open file " << _target + "_shrubbery" << std::endl;
        return ;
    }
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣦⣼⠻⠿⣦⣄⠀⢀⣼⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡾⠃⠀⠀⠀⠉⠙⠚⠙⢿⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡾⣦⢾⣦⣤⠀⠀⢀⢙⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠉⣿⡀⢀⣼⠿⣷⣼⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠾⠋⠀⠀⠀⠉⣻⡿⠞⠛⢻⣅⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠙⡿⠛⠁⠀⠉⠁⠛⣿⣾⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⢿⡄⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣹⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⡶⣿⡉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⢰⣦⣶⣶⣤⣀⠀⠀⠀⠀⢹⣷⣶⣦⣤⡶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣦⠀⢹⣧⣦⣴⠆⢠⣦⣦⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⢀⣠⣶⡾⠃⠀⠀⠉⠟⠷⢶⣶⣶⡀⠀⣀⣤⣸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣀⣤⣠⣤⡶⣿⣳⠟⠁⣤⣾⠀⠀⠘⠷⠋⠀⣸⣇⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⢰⣿⠟⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠷⡼⠏⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⠛⠀⠈⠘⠃⠉⠀⠀⠈⠛⠒⠋⠀⠀⠀⠀⠀⠀⠀⠈⠉⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⣰⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⡄⢀⣴⡇⠀⢀⣠⣾⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢾⡇⢀⣀⡀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠋⣿⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⠀⠀⠀⢿⡽⣿⠿⣧⠷⣼⣧⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠋⢯⡆⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⣾⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠋⠱⣿⣿⢶⠀⠀⢣⣿⡆⠈⡷⢷⡜⣷⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠇⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⢸⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣓⣾⠽⣇⠀⢁⡞⠑⠛⢻⡾⣷⣀⡄⣀⣤⣠⠄⠀⣠⣤⠀⠀⠀⠀⠀⠀⣀⡀⣤⣠⣤⡼⣉⣤⣦⡀⢀⠀⠀⠀" << std::endl <<
            "⠈⠙⣿⣄⠀⣠⣦⡄⠀⠀⢰⣶⣆⠀⠀⡀⠀⠀⠀⠀⢠⣀⣴⠋⠉⠹⣆⢹⣄⠸⠀⢠⠟⢸⠃⠈⠉⢻⡏⢻⠁⠀⢠⣟⣞⣀⠀⠀⢀⠀⠀⠿⢽⣧⣹⣠⣿⠏⠉⠙⠛⢻⣖⠴⣦" << std::endl <<
            "⠀⠀⠛⠿⠺⠻⠻⣧⣶⣴⣾⡿⣿⣴⠟⢛⡷⠂⠀⠀⡀⠀⠁⠀⠀⠀⠈⠛⣛⠓⣆⣞⠀⡏⠀⠀⠀⣸⠃⡏⢀⡠⠼⡟⢫⣧⡖⠊⠉⠀⠀⠀⠀⠀⠉⠙⠁⠀⠀⠀⠀⠀⠀⠀⣿" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠈⠛⢻⣿⣤⣀⠀⢠⡾⠁⠀⠀⠳⣽⠂⢀⠀⣀⡴⣶⣶⠉⢷⠈⠙⠀⣇⠀⠀⣰⢃⡼⠛⠉⣠⡤⠿⠻⣆⠙⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⡏⠉⠻⡷⡞⠀⠀⠀⣠⠞⣠⠴⠞⠋⠁⠀⠈⢿⣇⡤⡶⠛⣷⣭⠀⠀⠀⠀⠁⣻⣋⣀⣀⣀⢀⣈⠳⠸⠷⠤⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸" << std::endl <<
            "⠀⠀⠀⠀⢠⣾⣟⠟⠛⠋⠀⠀⠀⠀⠀⠀⠀⠠⢃⣰⠃⠀⠀⠀⠀⠀⠀⠈⠟⠀⠀⠀⢱⢿⡀⠠⡤⢤⣼⠟⠋⠛⠉⠋⠁⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠻" << std::endl <<
            "⠀⠀⠀⠀⠈⣿⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠇⣼⠁⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣄⣰⡞⠻⠃⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⢻⣧⣤⣀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣴⠾⠋⠀⠃⠠⡇⠀⠀⣀⡀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣛⣋⡁⠉⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠉⠙⠉⣿⢂⣄⠀⠀⠀⠀⠀⣿⢀⡀⠀⠀⠀⠀⠀⢴⣤⠶⠷⠛⠉⢳⠀⠀⠀⠀⣰⠿⣤⢦⠟⢻⢻⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠻⣻⠟⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣦⣴⣤⡿⢿⣋⣿⠇⠀⠀⠀⠀⠀⠈⠙⠲⡄⠀⠀⢸⠀⠀⠀⣰⠃⠀⠉⠉⠀⣾⡛⠁⠀⠀⠀⠀⠀⠀⠀⠀⣰⢦⣦⣤⣤⣴⡏⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠉⠀⠁⠀⠈⣯⡀⡀⡀⢀⠀⣠⡄⣼⠶⠾⠃⠀⠀⡞⠀⠀⠀⢹⠀⠀⠀⠀⠀⠈⢷⢦⣤⣄⠀⠀⠀⢠⣤⣴⠟⠀⠀⠉⠀⠈⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠓⠛⠛⠛⠋⠛⠋⠀⠀⠀⠀⠀⡇⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠈⠀⠹⠷⣾⡍⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡇⠀⠀⠸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡇⠀⠀⠀⢧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl <<
            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠏⠀⠀⠀⠀⢈⡻⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file.close();
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& form) {
    os << "ShrubberyCreationForm: " << form.getName() << ", target: " << form.getTarget();
    return os;
}
