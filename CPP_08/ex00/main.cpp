/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 23:49:09 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/12 00:41:07 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int	main()
{
	std::vector<int> vecteur;

	for (int i = 0; i < 5; i++)
		vecteur.push_back(i);
	try
	{
		std::cout << easyfind(vecteur, 2) << std::endl;
		std::cout << easyfind(vecteur, 18) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
