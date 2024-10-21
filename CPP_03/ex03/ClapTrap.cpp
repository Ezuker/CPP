/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:52:38 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/23 14:21:01 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_point(10), _attack_point(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	if (this != &copy)
		*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs.getName();
	this->_attack_point = rhs.getAttack();
	this->_energy_point = rhs.getEnergy();
	this->_hit_point = rhs.getHealth();
	return (*this);
}

int	ClapTrap::getAttack() const
{
	return (this->_attack_point);
}

int	ClapTrap::getEnergy() const
{
	return (this->_energy_point);
}

int	ClapTrap::getHealth() const
{
	return (this->_hit_point);
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_point <= 0 || this->_energy_point == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack. ";
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " ! ";
	std::cout << "The attack causes " << this->_attack_point << "." << std::endl;
	this->_energy_point--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damage.";
	this->_hit_point -= amount;
	std::cout << " He has now " << this->_hit_point << " health." << std::endl;
	if (this->_hit_point <= 0)
		std::cout << this->_name << " died." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_point <= 0 || this->_energy_point == 0)
		return;
	if (amount > 1000)
	{
		std::cout << "Claptrap " << this->_name << " can't be repaired more than 1000 health." << std::endl;
		return;
	}
	std::cout << "Claptrap " << this->_name << " repaired " << amount << " health. ";
	this->_energy_point--;
	this->_hit_point += amount;
	std::cout << "He has now " << this->_hit_point << "." << std::endl;
}

