/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 10:42:44 by ihornung          #+#    #+#             */
/*   Updated: 2023/07/01 15:06:41 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb / i)
	{
		if (!(nb % i))
			return (0);
		else
		i++;
	}
	return (1);
}
