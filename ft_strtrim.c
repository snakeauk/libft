/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:48:28 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/19 04:41:26 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	i;
	size_t	end;
	size_t	len;
	char *str;

	if (!s1 || !set)
		return (0);
	index = 0;
	end = ft_strlen(s1);
	while (s1[index] && ft_strchr(set, s1[index]))
		index++;
	if (!s1[index])
		return (ft_strdup(""));
	while (end > index && ft_strchr(set, s1[end]))
		end--;
	len = (end - index) + 1;
	str = ft_calloc(len, sizeof(char));
	i = 0;
	while (i < len && s1[i])
	{
		str[i] = s1[i + index];
		i++;
	}
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