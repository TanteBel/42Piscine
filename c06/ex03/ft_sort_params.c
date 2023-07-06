/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:20:29 by ihornung          #+#    #+#             */
/*   Updated: 2023/07/04 15:38:30 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	w;

	w = 0;
	while (*(str + w))
		w++;
	write(1, str, w);
}

void	ft_strcmp(int *s1, int *s2)
{
	int	j;

	while (*s1 != '\0' && *s1 == *s2)
		j = *s1 - *s2;
	return (j);
}

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(int argc, char *argv[0])
{
	int	i;

	i = 1;
	while (argc > 1)
	{
		ft_strcmp(argv[i], argv[i - 1]);
		ft_swap(argv[i], argv[i - 1]);
		if (argc != '\0')
			{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
			}
	}
	return (0);
}
