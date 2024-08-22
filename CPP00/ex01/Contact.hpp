/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:44:52 by wyaseen           #+#    #+#             */
/*   Updated: 2024/08/21 17:58:31 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "Main.hpp"

class Contact
{
	public:
		Contact();
		int		fill(int index);
		void	display_list();
		void	display_detail();

	private:
		int				_index;
		std::string		_infos[5];
		std::string		_fields[5];
};

#endif