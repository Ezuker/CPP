/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:52:40 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/23 13:39:57 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		//Constructor Destructor
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

		//Operator
		ClapTrap	&operator=(const ClapTrap &rhs);

		//Member functions
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		//Accessors
		std::string	getName() const;
		int			getHealth() const;
		int			getEnergy() const;
		int			getAttack() const;

	protected:
		std::string	_name;
		int			_hit_point;
		int			_energy_point;
		int			_attack_point;
};

#endif
