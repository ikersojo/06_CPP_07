/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printContent.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:46:40 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/20 16:28:59 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTCONTENT_HPP
	#define PRINTCONTENT_HPP

	#include <iostream>
	#include <typeinfo>

	template <typename T>
	void	printContent(const T& value)
	{
		std::cout << "Content: " << value << " (type: " << typeid(value).name() << ")" << std::endl;
	}

#endif // PRINTCONTENT_HPP
