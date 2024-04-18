/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 00:12:10 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/19 01:37:01 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  len;
    size_t  size;
    size_t  index;

    if (!s1 || !s2)
        return (0);
    len = ft_strlen(s1);
    size = ft_strlen(s2);
    str = (char*)malloc(sizeof(char) * (size + len + 1));
    if (!str)
        return (0);
    index = 0;
    while (index < len)
    {
        str[index] = s1[index];
        index++;
    }
    index = 0;
    while (index < size)
    {
        str[index + len] = s2[index];
        index++;
    }
    str[len + size] = '\0';
    return (str);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int ac, char **av)
// {
//     if (ac != 3)
//         return (0);
//     char *s1 = av[1];
//     char *s2 = av[2];
//     printf("ft_strjoin:%s\n", ft_strjoin(s1, s2));
//     return (0);
// }