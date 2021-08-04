/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:08:45 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/03 20:08:45 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*lst2;

    lst2 = ft_lstnew((*f)(lst->content));
    if (lst->next)
        lst2->next = ft_lstmap(lst->next, f, del);
    return (lst2);
}
