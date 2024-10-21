/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:52:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/23 14:43:18 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap a("Clap");
	ClapTrap b("Clap2");
	ScavTrap c("Scav");
	FragTrap d("Frag");
	FragTrap e(d);
	ScavTrap f(c);

	std::cout << std::endl;
	std::cout << e.getAttack() << " " << e.getEnergy() << " " << e.getHealth() << " " << e.getName() << std::endl;
	std::cout << f.getAttack() << " " << f.getEnergy() << " " << f.getHealth() << " " << f.getName() << std::endl; 
	a.attack("Clap2");
	c.takeDamage(a.getAttack());
	d.beRepaired(10);
	d.highFivesGuys();
	d.attack("Clap2");
	b.takeDamage(d.getAttack());
	c.guardGate();
	std::cout << std::endl;
	return (0);
}
