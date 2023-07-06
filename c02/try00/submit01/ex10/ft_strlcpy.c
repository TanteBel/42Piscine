/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:31:10 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/27 00:07:03 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//copy specified number [n] of characters from src to dest string
//declare unsigned int (always positive value) used to index through string
//while loop copies characters until it reaches specified number n
//if checks for NULL, the end of string
//if not end it copies character to dest
//if end it will add NULL and breaks loop
//when one loop is done the index y is counting up
//when loop breaks before n is filled it will add NULL characters until full
//function gives out a pointer to dest string

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	res;
	unsigned int	i;

	res = 0;
	i = 0;
	while (src[res])
	{
		res++;
	}
	if (size < 1)
	{
		return (res);
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}
