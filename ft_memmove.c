/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 21:20:18 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/20 21:22:37 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*ptr;
	const unsigned char	*str;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptr = (unsigned char *)dest;
	str = (const unsigned char *)src;
	if (str < ptr && ptr < str + n)
	{
		while (n--)
			ptr[n] = str[n];
	}
	else
	{
		count = 0;
		while (count < n)
		{
			ptr[count] = str[count];
			count++;
		}
	}
	return (dest);
}
