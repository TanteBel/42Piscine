/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 10:45:03 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/25 11:04:10 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//count as loop counter
//temp for temporary storage
//loop runs until the counter is less then half of array size
//current counter is stored in temp
//count is replaced with corresponding position from end of array
//swapping the elements

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	temp = 0;
	while (count < (size / 2))
	{
		temp = *(tab + count);
		*(tab + count) = *(tab + size - count - 1);
		*(tab + size - count - 1) = temp;
		count++;
	}
}
