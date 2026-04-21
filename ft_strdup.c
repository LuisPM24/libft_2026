/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 21:25:50 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/21 21:26:06 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	count;
	void	*ptr;
	char	*str_cpy;

	size = 0;
	count = 0;
	while (s[size] != '\0')
		size++;
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	str_cpy = (char *)ptr;
	while (count < size)
	{
		str_cpy[count] = s[count];
		count++;
	}
	str_cpy[count] = '\0';
	return (str_cpy);
}
