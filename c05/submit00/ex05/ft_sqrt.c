/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:34:01 by ihornung          #+#    #+#             */
/*   Updated: 2023/07/01 18:05:39 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	
	i = 1;
	while (i > 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
