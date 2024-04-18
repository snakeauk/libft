/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:48:28 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/19 00:29:57 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char 	*str;
	// char	*sub;
	size_t	len;
	size_t	index;
	size_t	count;

	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	index = 0;
	count = 0;
	while (index < len)
	{
		while (!ft_strchr(set, s1[index]))
		{
			// sub = ft_calloc(count + 1, 1);
			str[count] = s1[index];
			count++;
		}
		index++;
	}
	str[count] = '\0';
	return (str);
}
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return (0);

// 	char *s1 = av[1];
// 	char *set = av[2];

// 	printf("ft_strtrim:%s\n", ft_strtrim(s1, set));
// 	return (0);
// }