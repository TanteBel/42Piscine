/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:26:43 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/26 15:51:12 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Function checks for non-printable characters
//if there are non-printables, it will RETURN 0
//printable characters are 32 - 126 in ASCII table
//empty string or all printable it returns 1
//int x to keep index

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 32 || str[x] > 126))
			return (0);
		x++;
	}
	return (1);
}
