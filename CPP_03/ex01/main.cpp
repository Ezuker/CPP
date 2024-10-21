/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:52:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/23 14:17:14 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap a("copain");
	ClapTrap b(a);
	ScavTrap c("haha");
	ScavTrap e(c);
	ScavTrap d = c;

	std::cout << std::endl;
	a.attack("haha");
	c.takeDamage(a.getAttack());
	c.attack("copain");
	a.takeDamage(c.getAttack());
	a.attack("haha");
	c.guardGate();
	e.guardGate();
	std::cout << std::endl;
	return (0);
}
