/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:29 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/12 16:17:00 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	ifsContentTransform(std::string ifsContent, std::string needle, std::string haystack)
{
	std::string	newIfsContent;
	size_t		pos;

	pos = 0;
	if (ifsContent.find(needle) == std::string::npos)
		return (ifsContent);
	newIfsContent += ifsContent.substr(0, ifsContent.find(needle));
	newIfsContent += haystack;
	pos += needle.length() + ifsContent.find(needle);
	while (pos < ifsContent.length())
	{
		if (ifsContent.find(needle, pos + 1) == std::string::npos)
			break;
		newIfsContent += ifsContent.substr(pos, ifsContent.find(needle, pos + 1) - pos);
		newIfsContent += haystack;
		pos += needle.length() + ifsContent.find(needle, pos + 1) - pos;
	}
	newIfsContent += ifsContent.substr(pos, ifsContent.length() - pos);
	return (newIfsContent);
}

int	main (int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of args" << std::endl;
		return (1);
	}
	std::string	s0;
	std::string	s1;
	std::string	s2;

	s0 = argv[1];
	s0 = s0 + ".replace";
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream	ifs(argv[1]);
	if (!ifs)
	{
		std::cerr << "Wrong path" << std::endl;
		return (1);
	}
	std::ofstream	ofs(s0.c_str());
	if (!ofs)
	{
		std::cerr << "Can't create / access to outfile" << std::endl;
		return (1);
	}

	std::string	ifsContent;
	if (ifs.is_open())
	{
		while (ifs)
		{
			std::string	tmp;
			std::getline(ifs, tmp);
			if (tmp.length() > 0)
			{
				ifsContent += tmp;
				ifsContent += '\n';
			}
		}
	}
	ifsContent = ifsContentTransform(ifsContent, s1, s2);
	ofs << ifsContent;
	return (0);
}
