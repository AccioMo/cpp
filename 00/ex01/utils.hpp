/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:30:17 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/19 17:37:35 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <string>

void	print_cell(std::string cell_content);
bool	strisnumber(std::string str);
bool	strisalpha(std::string str);
bool 	isallspace(std::string str);
void	print_header(void);

#endif
