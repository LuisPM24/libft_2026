/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:58:42 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/21 20:28:06 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_count;
	size_t	little_count;

	big_count = 0;
	little_count = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[big_count] != '\0' && big_count < len)
	{
		little_count = 0;
		while ((big[big_count + little_count] == little[little_count]) &&
			((big_count + little_count) < len))
		{
			little_count++;
			if (little[little_count] == '\0')
				return ((char *)(big + big_count));
		}
		big_count++;
	}
	return (NULL);
}
