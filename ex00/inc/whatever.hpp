/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:06:33 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/20 16:26:24 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
	#define WHATEVER_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif

	#include <string>
	#include <iostream>

	template <typename T>
	void	swap(T& a, T&b)
	{
		T temp;

		temp = a;
		a = b;
		b = temp;
	}

	template <typename T>
	T&	min(T& a, T&b)
	{
		if (a < b)
			return (a);
		return (b);
	}

	template <typename T>
	T&	max(T& a, T&b)
	{
		if (a > b)
			return (a);
		return (b);
	}

#endif // WHATEVER_HPP
