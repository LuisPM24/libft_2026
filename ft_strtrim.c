/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:38:46 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/23 12:13:02 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	count;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (end <= start)
		return (ft_calloc(1, 1));
	end--;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	count = 0;
	while (start + count <= end)
	{
		str[count] = s1[start + count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
