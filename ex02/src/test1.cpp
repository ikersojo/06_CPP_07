/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:24:30 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/18 18:24:43 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

void	test1(void)
{
	Array<int> a1;
	std::cout << a1 << std::endl;
	printBlueLine("-------");

	Array<int> a2(5);
	printBlueLine("a2:");
	std::cout << a2 << std::endl;
		
	printBlueLine("a2.size():");
	std::cout << a2.size() << std::endl;

	printBlueLine("index i: a2[i]:");
	size_t	i = 0;
	while (i < 7)
	{
		try
		{
			std::cout << "index " << i << ": " << a2[i] << std::endl;
		}
		catch(const Array<int>::indexOutOfRangeException& e)
		{
			std::cerr << "\033[0;31m" << e.what() << "\033[0;39m" << std::endl;
		}
		i++;
	}
	printBlueLine("-------");

	printBlueLine("a1:");
	std::cout << a1 << std::endl;
	printBlueLine("a1 = a2");
	a1 = a2;
	printBlueLine("a1:");
	std::cout << a1 << std::endl;
	printBlueLine("-------");

	printBlueLine("a1[2] = 42:");
	a1[2] = 42;
	printBlueLine("a1:");
	std::cout << a1 << std::endl;
	printBlueLine("a2:");
	std::cout << a2 << std::endl;
	printBlueLine("-------");
}
