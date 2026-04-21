/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:44:43 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/21 14:45:57 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*s_copy;

	count = 0;
	s_copy = (unsigned char *)s;
	while (count < n)
	{
		if (s_copy[count] == (unsigned char)c)
			return ((void *)s_copy + count);
		count++;
	}
	return (NULL);
}
