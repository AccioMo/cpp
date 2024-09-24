/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:41:58 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/24 14:29:30 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

#include "replaceString.hpp"

int	main(int ac, char **av)
{
	if (ac != 4) {
		std::cerr << "usage: sed [filename] [replace] [relpace_with]" << std::endl;
		return (1);
	}
	std::string		ifname = av[1];
	std::string		ofname = ifname + ".replace";
	std::string		to_rep = av[2];
	std::string		rep_with = av[3];
	std::ifstream	ifile(ifname);
	if (!ifile.is_open()) {
		std::cerr << "error: unable to open file for reading" << std::endl;
		return (1);
	}
	std::ofstream	ofile(ofname);
	if (!ofile) {
		std::cerr << "error: unable to open file for writing" << std::endl;
		ifile.close();
		return (1);
	}
	std::string line;
	std::string text;
	while (std::getline(ifile, line)) {
		if (!ifile.eof())
			line += "\n";
		text += line;
	}
	ofile << replaceString(text, to_rep, rep_with);
	ifile.close();
	ofile.close();
	return (0);
}
