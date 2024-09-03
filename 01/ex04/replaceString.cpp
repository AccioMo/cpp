/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:15:17 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/30 15:44:17 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceString.hpp"

std::string	replaceString(std::string str, std::string s1, std::string s2)
{
	size_t	match;

	match = str.find(s1);
	while (match != std::string::npos)
	{
		str.erase(match, s1.length());
		str.insert(match, s2);
		match = str.find(s1, match);
	}
	return (str);
}
