/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:31:57 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/19 03:23:25 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*substr;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if(start + len > s_len)
		len = s_len - start;
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (0);
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
