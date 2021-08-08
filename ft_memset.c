/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:34:37 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:34:37 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memory, int byte, t_size quantity)
{
	while (quantity--)
		((unsigned char *) memory)[quantity] = byte;
	return (memory);
}
