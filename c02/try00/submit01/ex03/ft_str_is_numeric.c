/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:55:52 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/25 13:02:08 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function RETURNS 1 if only given digits or empty
//anything else it will RETURN 0
//str is pointer to char array
//int x will be used as index
//while loop goes until it reaches NULL
//if checks if the string is OUTSIDE of characters
//loop completes without finding a non-numeric character
//return 1 for numeric only

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < '0' || str[x] > '9'))
			return (0);
		x ++;
	}
	return (1);
}
