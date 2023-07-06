/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 07:54:33 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/30 08:01:32 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//factorize number with a recursive function call
//every time the function gets called it substracts -1 from nb

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}
