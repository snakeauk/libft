/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:31:57 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/18 16:34:51 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*substr;
	size_t	s_len;
	size_t	index;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s_len > start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	index = 0;
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
// #include<string.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
// 	if (ac != 4)
// 		return (0);
// 	char *s = av [1];

// 	int start = atoi(av[2]);

// 	size_t	len = atoi(av[3]);

// 	printf("ft_substr:%s\n", ft_substr(s, start, len));
// 	return (0);
// }