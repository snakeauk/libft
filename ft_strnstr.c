/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:13:54 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/18 01:17:31 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_index;
	size_t	n_index;

	if (!needle[0])
		return ((char *)haystack);
	h_index = 0;
	while (len > 0 && h_index < len && haystack[h_index])
	{
		n_index = 0;
		while ((h_index + n_index < len) && needle[n_index] && haystack[h_index + n_index] == needle[n_index])
			n_index++;
		if (!needle[n_index])
			return ((char *)&haystack[h_index]);
		h_index++;
	}
	return (0);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int ac, char **av)
// {
// 	if (ac != 4)
// 		return (0);
// 	char *haystack = av[1];
// 	char *ft_haystack = av[1];

// 	char *needle = av[2];
// 	char *ft_needle = av[2];

// 	size_t	len = atoi(av[3]);
// 	size_t	ft_len = atoi(av[3]);

// 	printf("   strnstr:%s\n", strnstr(haystack, needle, len));
// 	printf("ft_strnstr:%s\n", ft_strnstr(ft_haystack, ft_needle, ft_len));
// 	return (0);
// }