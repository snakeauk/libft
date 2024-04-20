/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:48:28 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/21 02:02:34 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char *str;

	if (!s1 || !set)
		return (0);
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end - 1]))
		end--;
	if (start == end)
		return (ft_strdup(""));
	len = end - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, &s1[start], len + 1);
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