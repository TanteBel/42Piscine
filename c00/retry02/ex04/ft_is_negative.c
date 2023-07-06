/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:29:34 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/21 14:06:00 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	x;
	char	y;

	x = 'N';
	y = 'P';
	if (n >= 0)
	{
		write(1, &x, 1);
	}
	else
	{
		if (n < 0)
		{
			write(1, &y, 1);
		}
	}
}