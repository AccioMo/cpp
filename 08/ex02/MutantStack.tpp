
#include <iostream>

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() { }

template <typename T>
MutantStack<T>::MutantStack(const std::stack<T> &other) : std::stack<T>(other) { }

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const std::stack<T> &other) {
	*this = other;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() { }

template <typename T>
typename MutantStack<T>::iterator 
MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator 
MutantStack<T>::end(void) {
	return (this->c.end());
}
