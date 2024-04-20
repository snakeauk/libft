/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:40:26 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/20 08:32:32 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size(long n)
{
	size_t	size;

	size = 1;
	while (n > 9)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long    lnb;
	char    *int_char;
    size_t  sign;
    size_t  size;

    size  = ft_size(n);
	lnb = n;
    sign = 0;
	if (0 > lnb)
    {
        sign = 1;
        lnb *= -1;
    }
    size += sign;
    int_char = (char *)ft_calloc(size + 1, sizeof(char));
    if (!int_char)
        return (0);
	while (size > 0)
    {
        int_char[size] = (lnb % 10) + '0';
        lnb /= 10;
        size--;
    }
    if (sign)
        int_char[0] = '-';
    return (int_char);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    int i = atoi(av[1]);
    printf("ft_itoa:%s\n",ft_itoa(i));
    return (0);
}