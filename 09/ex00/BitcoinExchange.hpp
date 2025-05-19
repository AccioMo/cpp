
#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <map>

class BitcoinExchange {

	private:

		std::map<std::string, float>	_db;

	public:
	
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void processInput(const std::string &input);
		void displayResult(void) const;

		/* getters */
		const std::map<std::string, float> &db(void) const;

};
