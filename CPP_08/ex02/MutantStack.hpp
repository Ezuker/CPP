/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:57:41 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/14 19:19:18 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>();
		MutantStack<T>(const MutantStack<T> &cpy);
		~MutantStack<T>();

		MutantStack<T> &operator=(const MutantStack<T> &rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin();
		iterator end();
};
#endif
