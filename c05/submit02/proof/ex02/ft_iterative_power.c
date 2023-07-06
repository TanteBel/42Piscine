/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:02:00 by ihornung          #+#    #+#             */
/*   Updated: 2023/07/01 20:46:39 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power --;
	}
	return (res);
}

/*#include<stdio.h>

int	main()
{
	int	i;
	int	j;

	i = 4;
	j = 2;
	printf("%d", ft_iterative_power(i, j));
	return (0);
}*/