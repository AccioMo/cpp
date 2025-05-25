
#include <iostream>

#include "PmergeMe.hpp"

int	main(int argc, char **argv) {
	if (argc < 2)
		std::cerr << "usage: " << argv[0] << " [numbers]" << std::endl;
	try {

		std::vector<int>	vec;
		std::deque<int>		deq;
		
		for (int i = 1; i < argc; i++) {
			if (std::string(argv[i]).length() == 0)
				throw PmergeMe::InvalidInput();
			for (size_t j = 0; j < std::string(argv[i]).length(); j++) {
				if (!std::isdigit(argv[i][j])) {
					throw PmergeMe::InvalidInput();
				}
			}
			int num = std::atoi(argv[i]);
			if (num < 0)
				throw PmergeMe::InvalidInput();
			
			vec.push_back(num);
			deq.push_back(num);
		}

		std::cout << "Before (";
		std::cout << vec.size() << " elements): ";
		for (int i = 0; i < argc - 1; i++)
			std::cout << argv[i + 1] << " ";
		std::cout << std::endl;

		double	v_time = PmergeMe::sort(vec);
		double	d_time = PmergeMe::sort(deq);

		std::cout << "After (";
		std::cout << vec.size() << " elements): ";
		for (size_t i = 0; i < vec.size(); i++)
			std::cout << vec[i] << " ";
		std::cout << std::endl;

		std::cout << std::fixed << std::setprecision(6);
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << v_time << " us" << std::endl;
		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << d_time << " us" << std::endl;

		std::vector<int> test_vec = vec;
		std::sort(test_vec.begin(), test_vec.end());

		if (test_vec != vec) {
			throw PmergeMe::InvalidInput();
		}


	} catch (const PmergeMe::InvalidInput &e) {
		std::cerr << "error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
