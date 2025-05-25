
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) { }
PmergeMe::PmergeMe(const PmergeMe &other) { *this = other; }
PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	if (this != &other) { }
	return (*this);
}
PmergeMe::~PmergeMe() { }

std::vector<int>	PmergeMe::generateJacobsthal(int max_n) {

	std::vector<int>	jacobsthal;

	jacobsthal.push_back(1);

	if (max_n <= 1)
		return (jacobsthal);

	jacobsthal.push_back(1);

	/* J(n) = J(n-1) + 2*J(n-2) */
	for (int n = 2; jacobsthal.back() < max_n; n++) {
		int next = jacobsthal[n-1] + 2*jacobsthal[n-2];
		jacobsthal.push_back(next);
	}

	return (jacobsthal);
}

std::vector<int> PmergeMe::generateInsertionOrder(int max_n) {

	std::vector<int> jacobsthal = generateJacobsthal(max_n);

	/*
	std::cout << "jacobsthal sequence: ";
	for (size_t i = 0; i < jacobsthal.size(); i++) {
		std::cout << jacobsthal[i] << " ";
	}
	std::cout << std::endl;
	*/

	std::vector<int> order;

	order.push_back(0);

	for (size_t i = 0; i < jacobsthal.size(); i++) {
		int max_range;
		if (i == jacobsthal.size() - 1)
			max_range = max_n;
		else
			max_range = jacobsthal[i+1];
		for (int j = max_range - 1; j >= jacobsthal[i]; j--) {
			order.push_back(j);
		}
	}

	return (order);
}

std::vector<int> PmergeMe::fordJohnsonSort(std::vector<int> vec) {

	if (vec.size() <= 1)
		return (vec);

	std::vector<int>	larger_chain;
	std::vector<int>	smaller_chain;

	for (size_t i = 0; i < vec.size() - 1; i += 2) {

		std::pair<int, int>	pair(vec[i], vec[i + 1]);
		
		if (pair.first > pair.second) {
			larger_chain.push_back(pair.first);
			smaller_chain.push_back(pair.second);
		} else {
			larger_chain.push_back(pair.second);
			smaller_chain.push_back(pair.first);
		}
	}

	std::vector<int>	main_chain = fordJohnsonSort(larger_chain);
	
	std::vector<int>	iorder = generateInsertionOrder(smaller_chain.size());

	/*
	std::cout << "larger_chain: ";
	for (size_t i = 0; i < larger_chain.size(); i++) {
		std::cout << larger_chain[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "smaller_chain: ";
	for (size_t i = 0; i < smaller_chain.size(); i++) {
		std::cout << smaller_chain[i] << " ";
	}
	std::cout << std::endl;


	std::cout << "sorted_larger_chain: ";
	for (size_t i = 0; i < main_chain.size(); i++) {
		std::cout << main_chain[i] << " ";
	}
	std::cout << std::endl;
	*/


	/*
	std::cout << "iorder: ";
	for (size_t i = 0; i < iorder.size(); i++) {
		std::cout << iorder[i] << " ";
	}
	std::cout << std::endl;
	*/

	for (size_t i = 0; i < iorder.size(); i++) {
		size_t index = iorder[i];
		if (index < smaller_chain.size()) {
			int element = smaller_chain[index];
			std::vector<int>::iterator	pos = std::lower_bound(main_chain.begin(), main_chain.end(), element);
			if (pos != main_chain.end()) {
				main_chain.insert(pos, element);
			} else {
				main_chain.push_back(element);
			}
		}
	}

	if (vec.size() % 2 == 1) {
		int last_element = vec.back();
		std::vector<int>::iterator pos = std::lower_bound(main_chain.begin(), main_chain.end(), last_element);
		if (pos != main_chain.end()) {
			main_chain.insert(pos, last_element);
		} else {
			main_chain.push_back(last_element);
		}
	}

	return (main_chain);
}

std::deque<int> PmergeMe::fordJohnsonSort(std::deque<int> &deq) {

	if (deq.size() <= 1)
		return (deq);

	std::deque<int>	larger_chain;
	std::deque<int>	smaller_chain;

	for (size_t i = 0; i < deq.size() - 1; i += 2) {

		std::pair<int, int>	pair(deq[i], deq[i + 1]);
		
		if (pair.first > pair.second) {
			larger_chain.push_back(pair.first);
			smaller_chain.push_back(pair.second);
		} else {
			larger_chain.push_back(pair.second);
			smaller_chain.push_back(pair.first);
		}
	}

	std::deque<int>	main_chain = fordJohnsonSort(larger_chain);

	std::vector<int>	iorder = generateInsertionOrder(smaller_chain.size());

	/*
	std::cout << "larger_chain: ";
	for (size_t i = 0; i < larger_chain.size(); i++) {
		std::cout << larger_chain[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "smaller_chain: ";
	for (size_t i = 0; i < smaller_chain.size(); i++) {
		std::cout << smaller_chain[i] << " ";
	}
	std::cout << std::endl;


	std::cout << "sorted_larger_chain: ";
	for (size_t i = 0; i < main_chain.size(); i++) {
		std::cout << main_chain[i] << " ";
	}
	std::cout << std::endl;
	*/


	/*
	std::cout << "iorder: ";
	for (size_t i = 0; i < iorder.size(); i++) {
		std::cout << iorder[i] << " ";
	}
	std::cout << std::endl;
	*/

	for (size_t i = 0; i < iorder.size(); i++) {
		size_t index = iorder[i];
		if (index < smaller_chain.size()) {
			int element = smaller_chain[index];
			std::deque<int>::iterator	pos = std::lower_bound(main_chain.begin(), main_chain.end(), element);
			if (pos != main_chain.end()) {
				main_chain.insert(pos, element);
			} else {
				main_chain.push_back(element);
			}
		}
	}

	if (deq.size() % 2 == 1) {
		int last_element = deq.back();
		std::deque<int>::iterator pos = std::lower_bound(main_chain.begin(), main_chain.end(), last_element);
		if (pos != main_chain.end()) {
			main_chain.insert(pos, last_element);
		} else {
			main_chain.push_back(last_element);
		}
	}

	return (main_chain);
}

double PmergeMe::sort(std::vector<int> &vec) {
	
	timeval start, end;
	gettimeofday(&start, NULL);

	if (vec.size() <= 1) return 0.0;
	if (vec.size() > 10000) {
		throw InvalidInput();
	}

	vec = fordJohnsonSort(vec);

	gettimeofday(&end, NULL);
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	double elapsed = (seconds * 1000000 + microseconds) / 1000000.0;

	return (elapsed);

}

double PmergeMe::sort(std::deque<int> &deq) {

	timeval start, end;
	gettimeofday(&start, NULL);

	deq = fordJohnsonSort(deq);

	gettimeofday(&end, NULL);
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	double elapsed = (seconds * 1000000 + microseconds) / 1000000.0;

	return (elapsed);

}
