/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:50:42 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/21 14:55:15 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*p1;
	unsigned char	*p2;

	count = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (count < n)
	{
		if (p1[count] != p2[count])
			return (p1[count] - p2[count]);
		count++;
	}
	return (0);
}
