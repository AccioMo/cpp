
#pragma once

#include <stack>
#include <string>
#include <sstream>
#include <iostream>
#include <exception>

#define OPERATORS "+-*/"

class RPN {

	private:

		std::stack<int>	stack;

	public:

		RPN(void);
		RPN(const RPN &other);
		RPN	&operator=(const RPN &other);
		~RPN();

		int evaluate(const std::string &expression);

		class InvalidExpression : public std::exception {
			public:
				const char *what() const throw() {
					return "expression invalid";
				}
		};

};
