/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:41:01 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/07 19:51:02 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int	tmp;
	int	signal;
	int	number;

	while ((*string >= 9 && *string <= 13) || *string == ' ')
		string++;
	signal = 1;
	if (*string == '-')
		signal = -1;
	if (*string == '-' || *string == '+')
		string++;
	number = 0;
	while (*string >= '0' && *string <= '9')
	{
		tmp = (*(string++) - '0') * signal;
		if (signal == 1 && number > 214748364 && tmp > 7)
			return (-1);
		if (signal == -1 && number < -214748364 && tmp < -8)
			return (0);
		number = (number * 10) + tmp;
	}
	return ((int) number);
}
