
#pragma once

#include <stack>
#include <string>

class RPN {

	private:

		std::stack<int> stack;

	public:

		RPN(void);
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();

		int evaluate(const std::string& expression);

};
