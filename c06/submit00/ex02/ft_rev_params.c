/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:51:40 by ihornung          #+#    #+#             */
/*   Updated: 2023/07/04 09:47:46 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//argc-1 will access last parameter

#include<unistd.h>

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
	while (argc > 1)
	{
		ft_putstr(argv[argc - 1]);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
