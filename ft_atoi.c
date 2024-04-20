/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:09:05 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/20 20:34:32 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t			index;
	int				sign;
	unsigned long	ln;
	unsigned long	overflow;

	ln = 0;
	index = 0;
	sign = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = 1;
		index++;
	}
	overflow = (unsigned long)LONG_MAX;
	if (sign)
		overflow = (unsigned long)LONG_MIN;
	while (ft_isdigit(str[index]))
	{
		ln *= 10;
		if (ln > overflow || overflow - ln < (unsigned long)str[index] - '0')
		{
			ln = overflow;
			break ;
		}
		ln += str[index] - '0';
		index++;
	}
	return (ln * ((sign * (-2)) + 1));
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int ac, char **av)
// {
// 	if (ac != 2)
// 		return (0);

// 	char *str = av[1];
// 	char *ft_str = av[1];

// 	printf("   atoi:%d\n", atoi(str));
// 	printf("ft_atoi:%d\n", ft_atoi(ft_str));
// }
