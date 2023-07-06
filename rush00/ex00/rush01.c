/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhabulo <ykhabulo@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:32:04 by ykhabulo          #+#    #+#             */
/*   Updated: 2023/06/18 16:25:41 by ykhabulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first_line(int x)
{
	ft_putchar('/');
	x--;
	while (x > 1)
	{
		ft_putchar('*');
		x--;
	}
	if (x > 0)
	{
		ft_putchar('\\');
	}
}

void	ft_print_middle(int x)
{
	if (x > 0)
	{
		ft_putchar('*');
		x--;
		while (x > 1)
		{
			ft_putchar(' ');
			x--;
		}
		if (x > 0)
		{
			ft_putchar('*');
		}
	}
	ft_putchar('\n');
}

void	ft_print_last_line(int x)
{
	ft_putchar('\\');
	x--;
	while (x > 1)
	{
		ft_putchar('*');
		x--;
	}
	if (x > 0)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_first_line(x);
		ft_putchar('\n');
		while ((y - 1) > 1)
		{
			ft_print_middle(x);
			y--;
		}
		if (y > 1)
		{
			ft_print_last_line(x);
		}
	}
}
