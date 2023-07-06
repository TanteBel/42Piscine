/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:17:31 by ihornung          #+#    #+#             */
/*   Updated: 2023/07/04 14:43:25 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[+2] = "5";
		write (1, &str[3], 1);
		write (1, str, 1);
		i++;
	}
}

int	main(int argc, char *argv[0])
{
	while (argc > 0)
	{
		ft_putstr(argv[argc]);
	}
	return (0);
}
