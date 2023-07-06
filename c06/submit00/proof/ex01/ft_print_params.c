/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:38:58 by ihornung          #+#    #+#             */
/*   Updated: 2023/07/02 10:44:39 by ihornung         ###   ########.fr       */
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
	int	i;

	i = 1;
	while (argc > i)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
