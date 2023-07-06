/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:39:07 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 18:50:09 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function gives out length of string
//int length keeps track
//*(str + length) access to current position in string

//#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*(str + length))
	{
		length++;
	}
	return (length);
}

//int	main(void)
//	{
//	char myString[] = "Hello, world!";
//	int length = ft_strlen(myString);
//	printf("The length of the string is: %d\n", length);
//	return (0);
//	}
