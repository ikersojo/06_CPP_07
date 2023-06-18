/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printContent.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:46:40 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/18 10:11:36 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTCONTENT_HPP
	#define PRINTCONTENT_HPP

	#include <iostream>
	#include <typeinfo>

	template <typename T>
	void	printContent(T& value)
	{
		std::cout << "Content: " << value << " (type: " << typeid(value).name() << ")" << std::endl;
	}

#endif // PRINTCONTENT_HPP
