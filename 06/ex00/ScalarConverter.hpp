
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter(); 
        ScalarConverter(const ScalarConverter &src);
        ScalarConverter &operator=(const ScalarConverter &rhs);

    public:
        static void convert(const std::string &literal);
};

#endif
