/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:39:24 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/21 02:00:49 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chrcmp(char const c1, char const c2)
{
    if (c1 == c2)
        return (1);
	return (0);
}

int	count_words(char const *str, char chr)
{
	int	count;
    size_t  index;

	if (!str)
		return (0);
    index = 0;
	count = 1;
	while (str[index])
	{
		while (str[index] && chrcmp(str[index], chr))
			index++;
		if (str[index])
		{
			count++;
			while (str[index] && !chrcmp(str[index], chr))
				index++;
		}
	}
	return (count);
}

char    *ft_strndup(char const *str, size_t len)
{
	char	*word;
	size_t	index;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
	{
		free(word);
		return (0);
	}
	index = 0;
	while (index < len)
	{
		word[index] = str[index];
		index++;
	}
	word[len] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	int		words;
	char	**result;
    size_t  index;
	size_t  count;
	size_t	start;

	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (0);
	count = 0;
    index = 0;
	while (s[index])
	{
		while (s[index] && chrcmp(s[index], c))
			index++;
		start = index;
		while (s[index] && !chrcmp(s[index], c))
			index++;
		if (index > start)
		{
			result[count] = ft_strndup((char *)&s[start], index - start);
			if (!result[count])
			{
				while (count--)
				{
					free(result[count]);
					count--;
				}
				free(result);
				return (0);
			}
			count++;
		}
	}
	result[count] = 0;
	return (result);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int ac, char **av)
// {
//     int index;
//     if (ac != 2)
//         return (0);
//     char *s = av[1];
//     char c = ' ';

//     char **split = ft_split(s, c);

//     index = 0;
//     while(split[index])
//     {
//         printf("ft_split:%s\n", split[index]);
//         index++;
//     }
//     return (0);
// }