/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:05:34 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/18 18:14:34 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

int	main(void)
{
	printRedLine("---- Testing default value for int ----");
	test0();
	printRedLine("----------------------------------------");

	printRedLine("--------- Testing Array Class ----------");
	test1();
	printRedLine("----------------------------------------");

	
	return (0);
}
