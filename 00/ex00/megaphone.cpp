/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:23:51 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/21 20:33:36 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void	printstrtoupper(char *str)
{
	int	len;
	
	len = strlen(str);
	for (int i = 0; i < len; i++)
		std::cout << (char)toupper(str[i]);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (ac > 1)
		for (int i = 1; i < ac; i++)
			printstrtoupper(av[i]);
	std::cout << std::endl;
	return (0);
}
