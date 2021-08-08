/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 18:07:56 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:59:49 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_size	ft_count_decimal_places(long int number)
{
	t_size	places;

	places = (number <= 0);
	while (number)
	{
		number /= 10;
		places++;
	}
	return (places);
}

char	*ft_itoa(int number)
{
	int		signal;
	int		places;
	char	*string;

	signal = 1;
	places = ft_count_decimal_places(number);
	string = (char *) ft_calloc(places + 1, sizeof(char));
	if (!string)
		return (NULL);
	if (number == 0)
		string[0] = '0';
	else if (number < 0)
	{
		string[0] = '-';
		signal *= -1;
	}
	while (number)
	{
		string[--places] = (number % 10) * signal + '0';
		number /= 10;
	}
	return (string);
}
