/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:19:12 by eboualla          #+#    #+#             */
/*   Updated: 2026/04/28 15:33:13 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nnode;
	void	*ncont;

	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		ncont = f(lst->content);
		nnode = ft_listnew(ncont);
		if (!nnode)
		{
			del(ncont);
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nnode);
		lst = lst->next;
	}
	return (nlist);
}
