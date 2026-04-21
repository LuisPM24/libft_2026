/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:51:57 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/21 12:07:29 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size > 0)
	{
		while (src[count] != '\0' && count < size - 1)
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	while (src[count] != '\0')
		count++;
	return (count);
}
