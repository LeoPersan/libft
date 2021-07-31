/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:41:01 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:41:01 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int		number;
	unsigned int	negative;

	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	negative = (*str == '-');
	if (*str == '-' || *str == '+')
		str++;
	number = 0;
	while (*str >= '0' && *str <= '9')
		number = (number * 10) + (*(str++) - '0');
	if (negative)
		return ((int) number * -1);
	return ((int) number);
}
