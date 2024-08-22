/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:08:51 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/22 13:42:40 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Main.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		int		add();
		int		select();
		int		display_PhoneBook();

	private:
		Contact	_contacts[8];
		int		_number;
};

#endif