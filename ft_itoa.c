/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:27:34 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/24 11:16:08 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_size(int nbr)
{
	int	size;

	size = 0;
	while (nbr)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char	*write_nbr(char *str, int n, int size)
{
	str[size--] = '\0';
	while (n >= 10)
	{
		str[size--] = (n % 10) + '0';
		n /= 10;
	}
	str[size--] = (n % 10) + '0';
	if (!size)
		str[size--] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		is_negative;

	is_negative = 0;
	if (n <= 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		else if (!n)
			return (ft_strdup("0"));
		is_negative++;
		n *= -1;
	}
	size = calc_size(n) + is_negative;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	return (write_nbr(str, n, size));
}
