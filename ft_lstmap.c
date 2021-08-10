/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:08:45 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 11:02:46 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*func)(void *), void (*del)(void *))
{
	t_list	*lst2;

	if (!lst)
		return (NULL);
	lst2 = ft_lstnew(func(lst->content));
	if (lst->next)
		lst2->next = ft_lstmap(lst->next, func, del);
	return (lst2);
}
