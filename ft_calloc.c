/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:40:05 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/21 21:23:46 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			ptr_size;
	size_t			count;
	unsigned char	*ptr;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr_size = nmemb * size;
	if (!ptr_size)
		ptr_size++;
	ptr = (unsigned char *)malloc(sizeof(unsigned char) * ptr_size);
	if (!ptr)
		return (NULL);
	count = 0;
	while (count < ptr_size)
	{
		ptr[count] = 0;
		count++;
	}
	return ((void *)ptr);
}
