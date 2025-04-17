
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &src) {
    *this = src;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
    if (this != &rhs) {
        // Copy assignment logic here
    }
    return *this;
}

static bool is_number(const char *literal) {
    int point = 0;
    if (std::string(literal) == "-inf" || std::string(literal) == "+inf" || \
        std::string(literal) == "nan" || std::string(literal) == "-inff" || \
        std::string(literal) == "+inff" || std::string(literal) == "nanf") {
        return true;
    }
    for (int i = 0; literal[i]; ++i) {
        if ((literal[i] == '+' || literal[i] == '-') && i == 0 && isdigit(literal[i+1])) {
            continue ;
        } else if (literal[i] == '.') {
            if (point || (i == 0 && !literal[i+1])) return false;
            point = 1;
        } else if (isdigit(literal[i])) {
            continue ;
        } else if (literal[i] == 'f' && !literal[i+1] && i > 0) {
            continue ;
        } else {
            return false;
        }
    }
    return true;
}

static void print_char(const char *literal) {
    std::cout << "char: ";
    int value = std::atoi(literal);
    if (!is_number(literal) || value < 0 || value > 127) {
        std::cout << "impossible" << std::endl;
        return;
    }
    if (value < 32 || value > 126) {
        std::cout << "Non displayable" << std::endl;
    } else {
        std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
    }
}

static void print_int(const char *literal) {
    std::cout << "int: ";
    int value = std::atoi(literal);
    if (!is_number(literal))
        std::cout << "impossible" << std::endl;
    else if (value == -1 && !(std::atof(literal) <= -1.0 && std::atof(literal) > -2.0)) {
        std::cout << "impossible" << std::endl;
    } else if (value == 0 && !(std::atof(literal) < 1.0 && std::atof(literal) > -1.0)) {
        std::cout << "impossible" << std::endl;
    } else
        std::cout << value << std::endl;
}

static void print_float(const char *literal) {
    std::cout << "float: ";
    float value = std::atof(literal);
    if (!is_number(literal)) {
        std::cout << "impossible" << std::endl;
    } else if (value == static_cast<int>(value)) {
        std::cout << value << ".0f" << std::endl;
    } else {
        std::cout << value << "f" << std::endl;
    }
}

static void print_double(const char *literal) {
    std::cout << "double: ";
    double value = std::atof(literal);
    if (!is_number(literal)) {
        std::cout << "impossible" << std::endl;
    } else if (value == static_cast<int>(value)) {
        std::cout << value << ".0" << std::endl;
    } else {
        std::cout << value << std::endl;
    }
}

void ScalarConverter::convert(const std::string &literal) {
   print_char(literal.c_str());
   print_int(literal.c_str());
   print_float(literal.c_str());
   print_double(literal.c_str());
}
