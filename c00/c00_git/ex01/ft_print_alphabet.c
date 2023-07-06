/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:57:27 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/16 22:18:49 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void)
{
	char a = 'a';
	while (
		a <= 'z'
		)
	{
		write(1, &a, 1);
		a++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
