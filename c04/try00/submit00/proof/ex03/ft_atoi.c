/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:06:29 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 15:16:27 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function writes first int in a string it encounters
//checks for white spaces first
//checks for +/-
//checks for digits
//multiply digit by ten to make space for the next digit
//substract 48 to get right ASCII to return the number

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	odd;
	int	j;

	odd = 1;
	j = 0;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			odd *= -1;
		}
		odd++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		j *= 10;
		j += *str - 48;
		++str;
	}
	return (odd * j);
}

/*int	main(int ac, char **av)
{
	int mine;
	int theirs;
	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		theirs = atoi(av[1]);
		printf("mine: %d | theirs: %d\n", mine, theirs);
	}
	return (0);
}*/


/*int	main(void)
{
		printf("%d", ft_atoi("\t\v\n---++-1245236"));
}*/
