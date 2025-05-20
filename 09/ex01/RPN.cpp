
#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(const RPN &other) {
	*this = other;
}

RPN	&RPN::operator=(const RPN &other) {
	if (this != &other) {
		this->stack = other.stack;
	}
	return *this;
}

RPN::~RPN() {}

int	RPN::evaluate(const std::string &expression) {
	std::istringstream	iss(expression);
	std::string			token;
	
	while (iss >> token) {
		if (token.empty()) {
			continue;
		} else {
			if (token.length() == 1 && isdigit(token[0])) {
				stack.push(token[0] - '0');
			} else if (token.length() == 2) {
				if (token[0] == '-') {
					if (isdigit(token[1])) {
						stack.push(-(token[1] - '0'));
					} else {
						throw InvalidExpression();
					}
				} else if (token[0] == '+') {
					if (isdigit(token[1])) {
						stack.push(token[1] - '0');
					} else {
						throw InvalidExpression();
					}
				} else {
					throw InvalidExpression();
				}
			} else if (std::string(OPERATORS).find(token[0]) != std::string::npos) {
				if (stack.size() < 2) {
					throw InvalidExpression();
				}

				int a, b;

				b = stack.top();
				stack.pop();

				a = stack.top();
				stack.pop();

				switch (token[0]) {
					case '+':
						stack.push(a + b);
						break;
					case '-':
						stack.push(a - b);
						break;
					case '*':
						stack.push(a * b);
						break;
					case '/':
						if (b == 0) {
							throw std::overflow_error("division by zero");
						}
						stack.push(a / b);
						break;
					default:
						throw InvalidExpression();
				}
			} else {
				throw InvalidExpression();
			} 
			
		}
	}

	if (stack.size() != 1) {
		throw InvalidExpression();
	}
	return stack.top();
}
