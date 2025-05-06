
#include "Span.hpp"
#include <iostream>

int main() {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int> range;
	for (int i = 0; i < 1000; i++) {
		range.push_back(i);
	}
	try {
		sp.addRange(range.begin(), range.end());
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Span big(1000);
	big.addRange(range.begin(), range.end());
	std::cout << big.longestSpan() << std::endl;
	std::cout << big.shortestSpan() << std::endl;
	return (0);
}