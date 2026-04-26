/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupalomi <lupalomi@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:37:22 by lupalomi          #+#    #+#             */
/*   Updated: 2026/04/26 17:39:54 by lupalomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lstmap_clear(t_list **lst, void *content, void (*del)(void *))
{
	if (del)
	{
		if (*lst)
			ft_lstclear(lst, del);
		if (content)
			del(content);
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			lstmap_clear(&new_lst, new_content, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			lstmap_clear(&new_lst, new_content, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
