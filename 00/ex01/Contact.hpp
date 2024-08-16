/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:36:41 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/16 11:56:29 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

# include "utils.hpp"

class Contact {
	private:
		int			index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		bool	init(void);
		bool	set_first_name(void);
		bool	set_last_name(void);
		bool	set_nickname(void);
		bool	set_phone_number(void);
		bool	set_darkest_secret(void);
		void	set_index(int value);
		void 	print_data(void);
		void 	show_info(void);
		Contact();
		~Contact();

};

void	print_cell(std::string cell_content);

#endif
