
#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <exception>
#include <limits.h>


class Span {
	private:
		unsigned int		_n;
		std::vector<int>	_numbers;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int number);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		class SpanFullException : public std::exception {
			virtual const char* what() const throw();
		};

		class NoSpanException : public std::exception {
			virtual const char* what() const throw();
		};
		
		template<typename T>
		void addRange(T begin, T end) {
			_numbers.insert(_numbers.end(), begin, end);
		}
};

#endif
