
#include <iostream>

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {
		std::cerr << "usage: " << argv[0] << " [input_file]" << std::endl;
		return (1);
	}

	BitcoinExchange btc;
	btc.processInput(argv[1]);

	// std::cout << btc << std::endl;

	return (0);

}