/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:11:44 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/08 17:11:27 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base	*generate(void)
{
	int	i;

	i = rand() % 3;
	if (i == 0)
		return (new A());
	if (i == 1)
		return (new B());
	if (i == 2)
		return (new C());
	return (NULL);
}

void	identify(Base *p)
{
	A	*a = NULL;
	B	*b = NULL;
	C	*c = NULL;

	a = dynamic_cast<A *>(p);
	b = dynamic_cast<B *>(p);
	c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "It's A class" << std::endl;
	if (b)
		std::cout << "It's B class" << std::endl;
	if (c)
		std::cout << "It's C class" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "It's A class" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "It's B class" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "It's C class" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't convert this pointer " << e.what() << std::endl;
	}
}

