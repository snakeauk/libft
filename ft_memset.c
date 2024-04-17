/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:15:11 by kinamura          #+#    #+#             */
/*   Updated: 2024/04/16 15:18:29 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	index;

	if (!b)
		return (0);
	index = 0;
	while (index < len)
	{
		((unsigned char *)b)[index] = (unsigned char)c;
		index++;
	}
	return (b);
}