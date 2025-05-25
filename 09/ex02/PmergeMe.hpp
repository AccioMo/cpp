
#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sys/time.h>
#include <iomanip>

class PmergeMe {

	private:

		PmergeMe(void);
		PmergeMe(const PmergeMe &other);
		PmergeMe	&operator=(const PmergeMe &other);
		~PmergeMe();

	public:

		static double sort(std::vector<int> &vec);
		static double sort(std::deque<int> &deq);

		static std::vector<int> fordJohnsonSort(std::vector<int> vec);
		static void fordJohnsonSort(std::deque<int> &deq);

		static std::vector<int> generateJacobsthal(int max_n);
		static std::vector<int> generateInsertionOrder(int max_n);

		class InvalidInput : public std::exception {
			public:
				const char *what() const throw() {
					return "invalid input";
				}
		};

};
