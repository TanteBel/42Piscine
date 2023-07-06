/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:42:35 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/26 23:54:17 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//function to return a pointer to the destination string
//used to copy a string into another string
//first parameter dest is a pointer to a char array and represents destination
//snd parameter is pointer to const array which represent source string
//declare an int s to index through soucre string src
//while loop copies characters from src string to dest string until NULL
//every char gets corresponding index in src and dest, then moves to next
//end while loop: adds null-terminating character at end of dest
//function returns a pointer to dest string to be able to acces modified string

char	*ft_strcpy(char *dest, char *src)
{
	int	s;

	s = 0;
	while (src[s] != '\0')
	{
		dest[s] = src[s];
		s++;
	}
	dest[s] = '\0';
	return (dest);
}
