/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 23:54:30 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/17 16:36:27 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "easyfind.hpp"

template <class T>
int	&easyfind(T array, int toFind)
{
	typename T::iterator itFound;

	itFound = std::find(array.begin(), array.end(), toFind);
	if (itFound != array.end())
		return *itFound;
	throw std::logic_error("Not found");
}

#endif
