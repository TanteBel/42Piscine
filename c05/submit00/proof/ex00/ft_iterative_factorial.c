/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:39:11 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/30 07:55:11 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//factorize number given as parameter

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb > 0)
	{
		res *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}
