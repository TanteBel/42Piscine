/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:39:59 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 08:43:54 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function will compare two strings up to a specified number of characters
//loop runs as long as n is greater 0, gets -1 every loop, index i +1
//characters in string are counted up
//if s1 & s2 are not equal it will return s1-s2
//if s1 equals NULL loop ends and returns 0

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0 && (s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
		n--;
	}
	if (n > 0)
		return (s1[i] - s2[i]);
	return (0);
}

/*
int	main(void)
{
	char	c[] = "Hello";
	char	d[] = "Hallo;

	printf("%i", ft_strncmp(c, d, 3));
}
*/