/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:46:58 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 18:48:09 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function displays a string of characters on standard output
//w is used to iterate through string
//*(...) will access string at current position
//write function used to output the string

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '0')
	{
		write(1, str, 1);
		str++;
	}
}

/*
int	main(void)
{
	ft_putstr("You are da bomb\n");
	return (0);
}
*/