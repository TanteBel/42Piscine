/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:34:01 by ihornung          #+#    #+#             */
/*   Updated: 2023/07/04 10:54:17 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;
	long int	lnb;

	i = 1;
	lnb = nb;
	while (i * i < lnb && i < 46341)
	{
		i++;
	}
	if (i * i == lnb)
		return (i);
	return (0);
}

/*
#include <stdio.h>

int	main()
{
	int	i;

	i = 0;
	printf("%d", ft_sqrt(i));
}
*/