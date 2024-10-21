/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:40:43 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/23 14:23:16 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor called of FragTrap" << std::endl;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_point = 30;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	if (this != &copy)
		*this = copy;
	std::cout << "Copy constructor called of FragTrap" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_attack_point = rhs.getAttack();
	this->_energy_point = rhs.getEnergy();
	this->_hit_point = rhs.getHealth();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called of FragTrap" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " wants to highFive the opponents" << std::endl;
}
