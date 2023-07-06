/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 09:53:12 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 13:46:23 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//puts length n (size) of src to the dest string
//return total length of string they tried to create (dest + n src)
//return >= destination size string has been truncated
//guaranties return string with end NULL

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	res;
	unsigned int	s;

	res = 0;
	while (dest[res])
	{
		res++;
	}
	if (size < 1)
		return (res);
		s = 0;
	while (src[s] != '\0' && s < size - 1)
	{
		dest[res] = src[s];
		s++;
	}
	dest [res] = '\0';
	return (res);
}

/*
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "World";

	printf("%u", ft_strlcat(a, b, 12));
}
*/