/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:27:55 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/23 14:04:04 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		//Constructor Destructor
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

		//Operator
		ScavTrap	&operator=(ScavTrap const &rhs);

		//Member functions
		void	guardGate();
		void	attack(const std::string &target);
};
#endif
