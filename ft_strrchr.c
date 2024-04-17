/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:53:03 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/17 23:08:03 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	char	*last;

	index = 0;
	last = 0;
	while (s[index])
	{
		if (((char*)s)[index] == (char)c)
			last = &((char *)s)[index];
		index++;
	}
	if (!c)
		last = &((char*)s)[index];
	return (last);
}
// 24の((char*)s)のキャストをはずずとエラーが出る
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return (0);
// 	char *s = av[1];
// 	char *ft_s = av[1];

// 	char c = av[2][0];
// 	char ft_c = av[2][0];
// 	printf("   strrchr:%s\n", strrchr(s, c));
// 	printf("ft_strrchr:%s\n", ft_strrchr(ft_s, ft_c));
// 	return (0);
// }