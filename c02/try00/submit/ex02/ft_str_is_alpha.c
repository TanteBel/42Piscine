/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:21:07 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/25 12:59:51 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function RETURNS 1 if only given alphabetical characters or empty
//anything else it will RETURN 0
//str is pointer to char array
//int x will be used as index
//while loop goes until it reaches NULL
//if checks if the string is OUTSIDE of characters
//loop completes without finding a non-alphabetical character
//return 1 for alpha only

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'A' || str[x] > 'Z') && (str[x] < 'a' || str[x] > 'z'))
			return (0);
		x ++;
	}
	return (1);
}
