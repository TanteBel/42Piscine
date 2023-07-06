/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:35:15 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/26 22:35:45 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function that turns non-printable characters into \hexadecimals

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(*str >> 4) & 0x0F]);
			ft_putchar("0123456789abcdef"[*str & 0x0F]);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
