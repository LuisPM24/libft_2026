/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:14:30 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/26 17:21:05 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			node = *lst;
			while (node->next)
				node = node->next;
			node->next = new;
		}
	}
}
