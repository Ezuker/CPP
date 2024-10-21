/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:18:20 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/08 20:03:44 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	srand(time(0));
	{
		Base	*base[100];

		for (int i = 0; i < 100; i++)
		{
			base[i] = generate();
			identify(base[i]);
		}
	}

	{
		Base	&base = *generate();
		identify(base);
	}
}
