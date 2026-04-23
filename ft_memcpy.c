/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:54:28 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/23 11:42:26 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*ptr;
	const unsigned char	*str;

	if (dest == NULL && src == NULL && n > 0)
		return (NULL);
	ptr = (unsigned char *)dest;
	str = (const unsigned char *)src;
	count = 0;
	while (count < n)
	{
		ptr[count] = str[count];
		count++;
	}
	return (dest);
}
