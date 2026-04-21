/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:02:58 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/21 12:22:19 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	count;

	while (src[src_size] != '\0')
		src_size++;
	while (dst[dst_size] != '\0')
		dst_size++;
	if (dst_size >= size)
		return (size + src_size);
	count = 0;
	while (count < size - dst_size - 1 && src[count] != '\0')
	{
		dst[dst_size + count] = src[count];
		count++;
	}
	dst[dst_size + count] = '\0';
	return (dst_size + src_size);
}
