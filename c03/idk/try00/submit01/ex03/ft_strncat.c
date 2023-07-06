/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:51:50 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 09:06:50 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//puts two strings together but will only do n characters from 2nd string

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest [d] != '\0')
		d++;
	while (src[s] != '\0' && s < nb)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest [d] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "World";

	printf("%s", ft_strncat(a, b, 3));
}
*/