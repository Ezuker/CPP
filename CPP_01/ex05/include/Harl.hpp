/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:32:00 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/12 16:06:32 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public:
		//Constructors
		Harl();
		~Harl();

		//Public Member Functions
		void	complain(std::string level);

	private:
		//Private Member Functions
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
#endif
