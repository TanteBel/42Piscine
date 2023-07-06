/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params_other.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:12:28 by ihornung          #+#    #+#             */
/*   Updated: 2023/07/04 21:22:48 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	str;
	int	param;

	str = 0;
	param = 1;
	while (param < argc && argc > 0)
	{
		while (argv[param][str])
		{
			write (1, &argv[param][str++], 1);
		}
		str = 0;
		write (1, "\n", 1);
		param++;
	}
	return (0);
}
