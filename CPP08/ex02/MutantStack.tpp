/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:48:30 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/25 15:20:35 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>   
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &copyTemplate) : std::stack<T>(copyTemplate) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &initTemplate) 
{
	if (this != &initTemplate)
    {

		std::stack<T>::operator=(initTemplate);
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() 
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const 
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const 
{
	return this->c.end();
}