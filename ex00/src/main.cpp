/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:05:34 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/18 09:14:03 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

int	main(void)
{
	printRedLine("--- MANDATORY TEST - Should Print: ---");
	printBlueLine("a = 3, b = 2");
	printBlueLine("min(a, b) = 2");
	printBlueLine("max(a, b) = 3");
	printBlueLine("c = chaine2, d = chaine1");
	printBlueLine("min(c, d) = chaine1");
	printBlueLine("max(c, d) = chaine2");
	printRedLine("--------------------------------------");

	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
