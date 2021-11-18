/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:31:24 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/13 18:36:02 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
