/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:05:40 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/18 10:00:37 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
	#define MAIN_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif

	#include <string>
	#include <iostream>
	#include "iter.hpp"
	#include "printContent.hpp"

	void	printBlueLine(std::string str);
	void	printRedLine(std::string str);

	template <typename T>
	void	iter(T* array, size_t array_len, void (*f)(T&));

#endif // MAIN_HPP
