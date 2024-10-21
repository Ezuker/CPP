/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:52:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/23 14:40:22 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap b("copain");
	ClapTrap c("copain2");
	ClapTrap d = b;
	ClapTrap e(d);

	std::cout << std::endl;
	b.attack("copain2");
	c.takeDamage(b.getAttack());
	b.beRepaired(10);
	std::cout << d.getName() << std::endl;
	std::cout << d.getHealth() << std::endl;
	e.attack("copain");
	std::cout << std::endl;
	return (0);
}
