/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:09:05 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/18 01:41:59 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t			index;
	int				sign;
	unsigned long int	ln;

	ln = 0;
	index = 0;
	sign = 1;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		ln  = ln * 10;
		ln  += str[index] - '0';
		if (ln > 9223372036854775807)
			ln--;
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