/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:32:31 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/10 21:50:00 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	data;
	data.coucou = 10;
	data.test = "haha";
	
	uintptr_t	ptr;
	
	ptr = Serializer::serialize(&data);

	std::cout << "Address of data " << &data << std::endl;
	std::cout << "uintptr_t " << ptr << std::endl;

	Data	*newData;

	newData = Serializer::deserialize(ptr);

	std::cout << newData->coucou << " " << newData->test << std::endl;
	std::cout << newData << std::endl;
	return (0);
}
