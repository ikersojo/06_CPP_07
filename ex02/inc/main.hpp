/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:05:40 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/18 18:14:34 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
	#define MAIN_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif

	#include <string>
	#include <iostream>
	#include "../inc/Array.hpp"

	void	printBlueLine(std::string str);
	void	printRedLine(std::string str);
	void	test0(void);
	void	test1(void);

#endif // MAIN_HPP
