/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:21:29 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/26 20:26:19 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function to capitalize first letter of each word
//first all capital letters are converted into lowercase
//in while loop it looks for a space and if it is,
//converts it to a capital letter if it is indeed a letter

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	c;

	x = 1;
	c = ' ';
	if (str[0] >= 'A' && str[0] <= 'Z')
	{
		str[0] += 32;
	}
	while (str [x] != '\0')
	{
		if (str [x] > c && str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
		x++;
	}
	return (str);
}
