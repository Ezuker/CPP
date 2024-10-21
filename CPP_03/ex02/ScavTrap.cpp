/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:39:39 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/23 14:22:53 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor called of ScavTrap" << std::endl;
	this->_attack_point = 20;
	this->_energy_point = 50;
	this->_hit_point = 100;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	if (this != &copy)
		*this = copy;
	std::cout << "Copy constructor called of ScavTrap" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs.getName();
	this->_attack_point = rhs.getAttack();
	this->_energy_point = rhs.getEnergy();
	this->_hit_point = rhs.getHealth();
	return (*this);
}


ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called of ScavTrap" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_point <= 0 || this->_hit_point <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is attacking " << target << " ! ";
	std::cout << "The attack causes " << this->_attack_point << "." << std::endl;
	this->_energy_point--;
}
