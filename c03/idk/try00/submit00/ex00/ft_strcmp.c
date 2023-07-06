/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:39:24 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 07:31:14 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strcmp function is used to compare to strings lexicographically
//meaning it compares each character in a string until they are different
//returns 0 if strings are equal
//returns >0 1st string ASCII greater value / <0 1st lower value than 2nd

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1[i] != '\0' && *s1[i] == *s2[i])
			i++;
	return (*s1 - *s2);
}

/*
int	main(void)
{
	char *s1 = "TestB";
	char *s2 = "TestA";
	int cmp;

	cmp = ft_strcmp(s1, s2);
	printf("return string: %d\n", cmp);
}
*/