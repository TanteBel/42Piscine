/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:40:10 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/30 10:15:45 by ihornung         ###   ########.fr       */
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

void	write_num(int nb)
{
	nb += 48;
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	int	mod;
	int	div;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		mod = nb % 10;
		div = nb / 10;
		if (div > 0)
			ft_putnbr(div);
		write_num(mod);
	}
}
