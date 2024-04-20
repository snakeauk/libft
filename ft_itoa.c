/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:40:26 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/20 20:27:24 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

size_t	ft_size(long n)
{
    size_t  size = 1;
    while (n > 9)
    {
        size++;
        n /= 10;
    }
    return size;
}

char	*ft_itoa(int n)
{
    long    ln = n;
    char    *int_char;
    size_t  sign = 0;
    size_t  size;
    
    if (ln < 0)
    {
        sign = 1;
        ln *= -1;
    }
    size = ft_size(ln);
    int_char = (char *)calloc((size + sign + 1), sizeof(char));
    if (!int_char)
        return (0);
    size--;
    while (size + 1 > 0)
    {
        int_char[size + sign] = (ln % 10) + '0';
        ln /= 10;
        size--;
    }
    if (sign)
        int_char[0] = '-';
    return (ft_strdup(int_char));
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int ac, char **av)
// {
//     if (ac != 2)
//         return (0);
//     int i = atoi(av[1]);
//     printf("ft_itoa:%s\n",ft_itoa(i));
//     return (0);
// }