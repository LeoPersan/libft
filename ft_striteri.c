/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:51:33 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 11:00:58 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *string, void (*func)(unsigned int, char*))
{
	t_size	i;

	if (!string)
		return ;
	i = 0;
	while (*string)
		func(i++, string++);
}
