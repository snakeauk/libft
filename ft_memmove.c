/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:31:55 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/17 19:47:02 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;

	if (!dst || !src)
		return (0);
	if (src < dst)
	{
		index = len;
		while (index-- > 0)
			((char *)dst)[index] = ((char *)src)[index];
	}
	else
	{
		index = 0;
		while (index < len)
		{
			((char *)dst)[index] = ((char *)src)[index];
			index++;
		}
	}
	return (dst);
}