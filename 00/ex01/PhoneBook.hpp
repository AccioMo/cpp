/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:18:37 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/16 11:35:31 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

# include "utils.hpp"
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int		numOfContacts;
	public:
		void	add(void);
		void	search(void);
		void	print_phonebook(void);
		void	setNumOfContacts(int value);
		int		exit(void);
		PhoneBook();
		~PhoneBook();
};

#endif
