/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:06:33 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/20 16:27:36 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
	#define ITER_HPP

	template <typename T>
	void	iter(T* array, size_t array_len, void (*f)(const T&))
	{
		size_t	i = 0;

		while (i < array_len)
			f(array[i++]);
	}

#endif // ITER_HPP
