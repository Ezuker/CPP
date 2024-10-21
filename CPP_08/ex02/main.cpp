/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:05:41 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/14 18:50:13 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"
#include <stack>
#include <list>

int	opposite(int &i)
{
	return (-i);
}

void	mymain()
{
	MutantStack<int> array;

	array.push(5);
	array.push(6);
	array.push(3);
	
	MutantStack<int>::iterator	it;
	MutantStack<int>::iterator	ite = array.end();

	std::cout << std::endl;
	for (it = array.begin(); it != ite; ++it)
		*it = opposite(*it);
	for (it = array.begin(); it != ite; ++it)
		std::cout << *it << std::endl;
	
	array.pop();
	std::cout << std::endl;
	ite = array.end();

	for (it = array.begin(); it != ite; ++it)
		std::cout << *it << std::endl;
}

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	mymain();
	return 0;
}
