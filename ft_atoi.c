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
	int	tmp;
	int	signal;
	int	number;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	signal = 1;
	if (*str == '-')
		signal = -1;
	if (*str == '-' || *str == '+')
		str++;
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		tmp = (*(str++) - '0') * signal;
		if (signal == 1 && number > 214748364 && tmp > 7)
			return (-1);
		if (signal == -1 && number < -214748364 && tmp < -8)
			return (0);
		number = (number * 10) + tmp;
	}
	return ((int) number);
}
