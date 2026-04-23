/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:54:55 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/22 17:42:03 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	str_len;
	char	*ptr;

	count = 0;
	str_len = 0;
	if (!s)
		return (NULL);
	while (s[str_len])
		str_len++;
	if (start >= str_len)
		return (ft_calloc(1, sizeof(char)));
	if (len > (str_len - start))
		len = str_len - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (count < len && (start + count) < str_len)
	{
		ptr[count] = s[count + start];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
