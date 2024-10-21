/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:39:11 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/23 14:03:34 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		//Constructor Destructor
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		~FragTrap();

		//Operator
		FragTrap	&operator=(const FragTrap &rhs);

		//Member functions
		void	highFivesGuys();
};
#endif
