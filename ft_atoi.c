/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:29:55 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/21 20:30:44 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nbr;
	int	count;

	sign = 1;
	nbr = 0;
	count = 0;
	while (nptr[count] == ' ' || (nptr[count] >= 9 && nptr[count] <= 13))
		count++;
	if (nptr[count] == '+' || nptr[count] == '-')
	{
		if (nptr[count] == '-')
			sign *= -1;
		count++;
	}
	if (nptr[count] == '+' || nptr[count] == '-')
		return (0);
	while (nptr[count] >= 48 && nptr[count] <= 57)
	{
		nbr = (nbr * 10) + ((int)nptr[count] - '0');
		count++;
	}
	return (nbr * sign);
}
