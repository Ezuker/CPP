/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:29:21 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/10 21:49:30 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &cpy)
{
	*this = cpy;
}

Serializer::~Serializer()
{
}

Serializer	&Serializer::operator=(const Serializer &rhs)
{
	(void)rhs;
	return *this;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	uintptr_t	value;

	value = reinterpret_cast<uintptr_t>(ptr);
	return (value);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data	*address;

	address = reinterpret_cast<Data *>(raw);
	return (address);
}
