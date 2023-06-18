/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:05:37 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/18 09:13:04 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

void	printBlueLine(std::string str)
{
	std::cout << "\033[0;94m" << str << "\033[0;39m" << std::endl;
}

void	printRedLine(std::string str)
{
	std::cout << std::endl << "\033[0;31m" << str << "\033[0;39m" << std::endl;
}
