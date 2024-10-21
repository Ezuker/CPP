/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:26:09 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/06 12:37:54 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct	Data
{
	int	coucou;
	std::string test;
};

class Serializer
{
	public:
		static	uintptr_t	serialize(Data *ptr);
		static	Data		*deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer(const Serializer &cpy);
		~Serializer();
		
		Serializer	&operator=(const Serializer &rhs);
};
#endif
