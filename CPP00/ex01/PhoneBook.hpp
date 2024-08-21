/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:41:03 by shmohamm           #+#    #+#             */
/*   Updated: 2024/08/20 18:41:04 by shmohamm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include <sstream>

class Contact
{
	private:
		std::string	name;
		std::string	last_name;
		std::string	nick_name;
		std::string	secret;
		std::string	phone;

	public:
		// Setters
		void set_name(const std::string& new_name) { name = new_name; }
		void set_last_name(const std::string& new_last_name) { last_name = new_last_name; }
		void set_nick_name(const std::string& new_nick_name) { nick_name = new_nick_name; }
		void set_secret(const std::string& new_secret) { secret = new_secret; }
		void set_phone(const std::string& new_phone) { phone = new_phone; }

		// Getters
		std::string get_name() const { return name; }
		std::string get_last_name() const { return last_name; }
		std::string get_nick_name() const { return nick_name; }
		std::string get_secret() const { return secret; }
		std::string get_phone() const { return phone; }

		void display() const
		{
			std::cout << name << " : " << phone << std::endl;
		}
};

class PhoneBook
{
	public:
	Contact Cons[8];
	int		num;
};

#endif