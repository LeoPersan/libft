/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:51:33 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 11:03:45 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *string, int file_descriptor)
{
	if (!string)
		return ;
	while (*string)
		write(file_descriptor, string++, 1);
	write(file_descriptor, "\n", 1);
	write(file_descriptor, "\0", 1);
}
