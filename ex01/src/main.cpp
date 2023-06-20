/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:05:34 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/20 16:29:43 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

int	main(void)
{
	size_t	len = 5;
	int		intArray[] = {123, 456, 789, 234, 567};
	char	charArray[] = {'q', 'w', 'e', 'r', 't'};

	printRedLine("--------------------------------------");
	iter(intArray, len, printContent);
	printRedLine("--------------------------------------");
	iter(charArray, len, printContent);
	printRedLine("--------------------------------------");
	return (0);
}
