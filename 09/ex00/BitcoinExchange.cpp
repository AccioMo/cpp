
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {

	std::ifstream file("data.csv");
	if (!file.is_open()) {
		std::cerr << "error: could not access database." << std::endl;
		return ;
	}

	std::string line;
	std::getline(file, line);
	if (line != "date,exchange_rate") {
		std::cerr << "error: invalid database format." << std::endl;
		return ;
	}
	while (std::getline(file, line)) {
		std::istringstream iss(line);
		std::string	date;
		float		value;
		if (std::getline(iss, line, ',') && !line.empty()) {
			date = line;
		} else {
			std::cerr << "error: invalid date format." << std::endl;
			return ;
		}
		if (std::getline(iss, line) && !line.empty())
			value = std::atof(line.c_str());
		else {
			std::cerr << "error: invalid value format." << std::endl;
			return ;
		}
		_db[date] = value;
	}

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	_db = other.db();
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other) {
		_db = other.db();
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() { }

void BitcoinExchange::processInput(const std::string &input_file) {
	std::ifstream file(input_file.c_str());
	if (!file.is_open()) {
		std::cerr << "error: could not access input file." << std::endl;
		return ;
	}

	std::string line;
	std::getline(file, line);
	if (line != "date | value") {
		std::cerr << "error: invalid input format." << std::endl;
		return ;
	}
	while (std::getline(file, line)) {
		std::istringstream iss(line);
		std::string date, svalue;

		if (std::getline(iss, date, '|') && std::getline(iss, svalue)) {
			float value = std::atof(svalue.c_str());
			if (value < 0) {
				std::cerr << "error: not a positive number." << std::endl;
				continue ;
			} else if (value > 1000) {
				std::cerr << "error: too large a number." << std::endl;
				continue ;
			}
			date = date.substr(0, date.length() - 1);
			std::map<std::string, float>::iterator it = _db.upper_bound(date);
			if (it == _db.begin()) {
				std::cerr << "error: bad input => " << date << std::endl;
				continue ;
			} else if (it == _db.end()) {
				std::cerr << "error: " << date << " not found in database." << std::endl;
			} else {
				std::cout << date << " => " << value << " = " << value * (*--it).second << std::endl;
			}
		} else {
			std::cerr << "error: invalid input format." << std::endl;
		}
	}
}

const std::map<std::string, float> &BitcoinExchange::db(void) const {
	return _db;
}
