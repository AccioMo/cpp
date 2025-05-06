
#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span& other) : _n(other._n), _numbers(other._numbers) {}

Span::~Span() {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _n = other._n;
        _numbers = other._numbers;
    }
    return (*this);
}

void Span::addNumber(int number) {
    if (_numbers.size() >= _n)
        throw SpanFullException();
    _numbers.push_back(number);
}

static unsigned int min(unsigned int a, unsigned int b) {
	return (a < b) ? a : b;
}

unsigned int Span::shortestSpan() const {
    if (_numbers.size() <= 1)
        throw NoSpanException();
    
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    
    unsigned int minSpan = INT_MAX;
    for (size_t i = 1; i < sorted.size(); i++) {
        int span = sorted[i] - sorted[i-1];
        minSpan = min(minSpan, span);
    }
    
    return minSpan;
}

unsigned int Span::longestSpan() const {
    if (_numbers.size() <= 1)
        throw NoSpanException();
    
    return *std::max_element(_numbers.begin(), _numbers.end()) - 
           *std::min_element(_numbers.begin(), _numbers.end());
}

const char* Span::SpanFullException::what() const throw() {
    return "span is full, cant add more numbers";
}

const char* Span::NoSpanException::what() const throw() {
    return "cant calculate span with less than 2 numbers";
}
