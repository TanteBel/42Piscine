/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:22:44 by ihornung          #+#    #+#             */
/*   Updated: 2023/07/02 10:36:47 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	w;

	w = 0;
	while (*(str + w))
	{
		w++;
	}
	write(1, str, w);
}

int	main(int argc, char *argv[0])
{
	argc = 0;
	ft_putstr(argv[argc]);
	write(1, "\n", 1);
	return (0);
}
