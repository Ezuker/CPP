/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:50:04 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/29 15:37:54 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "Initialize objects" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal *k = new WrongAnimal();
	const WrongAnimal *l = new WrongCat();
	WrongCat c = WrongCat();

	std::cout << std::endl << "Type of objects" << std::endl << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl << "Sound of Objects" << std::endl << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	l->makeSound();
	c.makeSound();

	std::cout << std::endl << "Destruction of Objects" << std::endl << std::endl;
	delete meta;
	delete j;
	delete i;
	delete k;
	delete l;
	return 0;
}
