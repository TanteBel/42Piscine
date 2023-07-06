/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:50:42 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/16 20:54:08 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
    char c;
    write (1, &c, 1);
    return 0;
}
