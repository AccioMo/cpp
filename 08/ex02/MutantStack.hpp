
#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

	private:

		std::stack<T> _stack;

	public:

		MutantStack(void);
		MutantStack(const std::stack<T> &other);
		MutantStack &operator=(const std::stack<T> &other);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin();
		iterator end();

};

#include "MutantStack.tpp"
