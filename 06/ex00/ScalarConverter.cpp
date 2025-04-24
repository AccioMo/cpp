
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &src) {
    *this = src;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
    if (this == &rhs) {
        return *this;
    }
    return *this;
}

static int len(const char *literal) {
    int i = 0;
    while (literal[i]) {
        ++i;
    }
    return (i);
}

static bool is_pseudo_literal(const char *literal) {
    if (std::string(literal) == "-inf" || std::string(literal) == "+inf" || \
        std::string(literal) == "nan" || std::string(literal) == "-inff" || \
        std::string(literal) == "inf" || std::string(literal) == "inff" || \
        std::string(literal) == "+inff" || std::string(literal) == "nanf") {
        return true;
    }
    return false;
}

static bool is_number(const char *literal) {
    int point = 0;
    if (literal == NULL || literal[0] == '\0') {
        return false;
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
    if (!is_number(literal)) {
        if (len(literal) == 1) {
            std::cout << "'" << literal[0] << "'" << std::endl;
        } else {
            std::cout << "impossible" << std::endl;
            return ;
        }
    }
    else if (value < 32 || value > 126) {
        std::cout << "Non displayable" << std::endl;
    } else {
        std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
    }
}

static void print_int(const char *literal) {
    int value;

    std::cout << "int: ";
    if (!is_number(literal) && !is_pseudo_literal(literal)) {
        if (len(literal) == 1) {
            value = (int)literal[0];
        } else {
            std::cout << "impossible" << std::endl;
            return ;
        }
    } else {
        value = std::atoi(literal);
    }
    if (value == -1 && !(std::atof(literal) <= -1.0 && std::atof(literal) > -2.0)) {
        std::cout << "impossible" << std::endl;
    } else if (value == 0 && !(std::atof(literal) < 1.0 && std::atof(literal) > -1.0)) {
        std::cout << "impossible" << std::endl;
    } else
        std::cout << value << std::endl;
}

static void print_float(const char *literal) {
    float value;

    std::cout << "float: ";
    if (!is_number(literal) && !is_pseudo_literal(literal)) {
        if (len(literal) == 1) {
            value = (float)literal[0];
        } else {
            std::cout << "impossible" << std::endl;
            return ;
        }
    } else {
        value = std::atof(literal);
    }
    if (value == static_cast<int>(value)) {
        std::cout << value << ".0f" << std::endl;
    } else {
        std::cout << value << "f" << std::endl;
    }
}

static void print_double(const char *literal) {
    double value;
    
    std::cout << "double: ";
    if (!is_number(literal) && !is_pseudo_literal(literal)) {
        if (len(literal) == 1) {
            value = (double)literal[0];
        } else {
            std::cout << "impossible" << std::endl;
            return ;
        }
    } else {
        value = std::atof(literal);
    }
    if (value == static_cast<int>(value)) {
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
