/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:40:10 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 18:48:22 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function to display number entered as parameter
//is nb within max length of int?
//is nb max of what int value can be - write like first if
//%10 will give next number to write
//divide by 10 will move through numbers
//until job done
//lastly single digits get checked

//adding 48 in putchar will give the right ASCII value

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}

/*
int	main(void)
{
	ft_putnbr(1258660);
	return (0);
}
*/