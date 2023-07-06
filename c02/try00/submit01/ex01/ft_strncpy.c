/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:59:01 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/26 20:32:51 by ihornung         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	y;

	y = 0;
	while (y < n)
	{
		if (src[y] != '\0')
		{
			dest[y] = src[y];
		}
		else
		{
			dest[y] = '\0';
			break ;
		}
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
