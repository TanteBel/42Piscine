/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:25:31 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 13:42:00 by ihornung         ###   ########.fr       */
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
	int	i;
	int	cat;

	i = 0;
	cat = 0;
	while (dest[cat] != '\0')
	{
		i++;
		cat++;
	}
	while (src[i - cat] != '\0')
	{
		dest[i] = src[i - cat];
			i++;
	}
	dest[i] = '\0';
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
