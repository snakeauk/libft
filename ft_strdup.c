/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:32:17 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/18 01:29:44 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char 	*str;
	size_t	index;

	str = (char *)malloc(sizeof(s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (0);
	index = 0;
	while (str[index])
	{
		str[index] = s1[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}