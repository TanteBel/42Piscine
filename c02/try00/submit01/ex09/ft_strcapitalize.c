/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:21:29 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/27 00:17:23 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function to capitalize first letter of each word
//first all capital letters are converted into lowercase
//in while loop it looks for a space and if it is,
//converts it to a capital letter if it is indeed a letter

char	*ft_strcapitalize(char *str)
{
	char	c;
	int		x;

	x = 1;
	c = ' ';
	while (str [x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
		str[0] += 32;
			if ((str[x] >= 'a' && str[x] <= 'z'))
			{
				if ((c < '0' || c > '9') && (c < 'a' || c > 'z')
					&& (c < 'A' || c > 'Z'))
					str[x] -= 32;
			}
		c = str[x];
		x++;
		}
	}
	return (str);
}
