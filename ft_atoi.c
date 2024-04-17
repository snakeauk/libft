/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:09:05 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/18 04:41:32 by kinamura         ###   ########.fr       */
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
	unsigned long int	ln;

	ln = 0;
	index = 0;
	sign = 1;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		if ((ln > 922337203685477580 && sign == 1 && str[index] > '7') || ln >= 922337203685477581)
			return (-1);
		else if ((ln > 922337203685477580 && str[index] > '8' && sign == -1) | (ln >= 922337203685477581))
			return (0);
		ln  = ln * 10 + (str[index] - '0');
		index++;
	}
	return (sign * ln);
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