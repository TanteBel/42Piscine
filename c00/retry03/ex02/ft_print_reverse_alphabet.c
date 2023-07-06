/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:43:01 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/17 21:57:35 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 'z';
	while (a >= 'a')
	{
		write(1, &a, 1);
		a--;
	}
}
