/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:43:46 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/29 11:00:39 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->_src[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_src[i])
			delete this->_src[i];
	}
}

AMateria	*MateriaSource::getSrc(int i) const
{
	return (this->_src[i]);
}
MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		this->_src[i] = rhs.getSrc(i);
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_src[i] == NULL)
		{
			this->_src[i] = m->clone();
			std::cout << "Materia learned" << std::endl;
			delete m;
			return;
		}
	}
	std::cout << "Not enough space to learn a Materia" << std::endl;
	delete m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	std::cout << "create Materia " << type << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_src[i]->getType() == type)
		{
			return (this->_src[i]->clone());
		}
	}
	return (0);
}
