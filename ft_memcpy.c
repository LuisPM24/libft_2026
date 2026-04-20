/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 21:04:18 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/20 21:08:50 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				cont;
	unsigned char		*ptr;
	const unsigned char	*str;

	if (dest == NULL && src == NULL && n > 0)
		return (NULL);
	ptr = (unsigned char *)dest;
	str = (const unsigned char *)src;
	cont = 0;
	while (cont < n)
	{
		ptr[cont] = str[cont];
		cont++;
	}
	return (dest);
}
