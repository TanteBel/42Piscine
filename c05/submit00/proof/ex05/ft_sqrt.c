/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:34:01 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/30 11:17:24 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	res;
	long int	sqr;

	res = nb;
	if (res <= 0)
		return (0);
	if (res == 1)
		return (1);
	sqr = 2;
	while (sqr * sqr >= res)
	{
		if (sqr * sqr == res)
			return (sqr);
		sqr++;
	}
}
