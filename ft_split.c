/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:00:21 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/23 12:38:29 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char chr)
{
	int		in_word;
	size_t	count;
	size_t	words;

	count = 0;
	words = 0;
	in_word = 0;
	while (str[count])
	{
		if (str[count] != chr && !in_word)
		{
			in_word = 1;
			words++;
		}
		else if (str[count] == chr)
			in_word = 0;
		count++;
	}
	return (words);
}

static int	add_word(char const **s, char chr, char **list, size_t *count)
{
	const char	*start;
	size_t		len;
	size_t		count2;

	count2 = 0;
	while (**s == chr)
		(*s)++;
	if (**s == '\0')
		return (1);
	start = *s;
	while (**s && **s != chr)
		(*s)++;
	len = *s - start;
	list[*count] = (char *)malloc(len + 1);
	if (!list[*count])
		return (0);
	while (count2 < len)
	{
		list[*count][count2] = start[count2];
		count2++;
	}
	list[*count][len] = '\0';
	(*count)++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**list;
	size_t	count;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	list = malloc((words + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	count = 0;
	while (*s)
	{
		if (*s != c && !add_word(&s, c, list, &count))
		{
			while (count--)
				free(list[count]);
			free(list);
			return (NULL);
		}
		else if (*s)
			s++;
	}
	list[words] = NULL;
	return (list);
}
