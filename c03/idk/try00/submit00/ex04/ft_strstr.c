/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihornung <ihornung@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:16:59 by ihornung          #+#    #+#             */
/*   Updated: 2023/06/29 09:15:44 by ihornung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function searches for a specific string (to_find) in a source string (str)

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	f;
	int	s;

	f = 0;
	s = 0;
	if (*to_find == '\0')
		return (str);
	while (str[s] != '\0')
	{
		if (str[s] == to_find[f])
		{
			while (str[s + f] == to_find[f])
			{
				f++;
				if (to_find[f] == '\0')
					return (&str[s]);
			}
		}
		s++;
	}
	return (0);
}

/*
int	main(void)
{
	char	c[] = "You are cool";
	char	f[] = "cool";
	char *result = ft_strstr(c, f);
	if (result != 0)
	{
		printf("%s\n", result);
	}
	else
	{
		printf("Substring not found");
	}
}
*/