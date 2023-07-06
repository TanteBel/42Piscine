/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:25:31 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 08:49:21 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function joins two strings into one
//ptr used to traverse the destination string
//checks if strings are both NULL, if so, there is nothing to do
//1st while loop goes through dest string until it reaches NULL
//2nd while loop puts both strings together until src is NULL
//returning dest

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	if ((*dest == '\0') && (*src == '\0'))
		return (0);
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*src = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "World";

	printf("%s", ft_strcat(a, b));
}
*/
