/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 18:07:56 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/04 20:34:10 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_decimal_places(long int number)
{
	size_t	places;

	places = (number <= 0);
	while (number)
	{
		number /= 10;
		places++;
	}
	return (places);
}

char	*ft_itoa(int n)
{
	long int	number;
	int			places;
	char		*string;

	number = n;
	places = ft_count_decimal_places(number);
	string = (char *) ft_calloc(places + 1, sizeof(char));
	if (!string)
		return (NULL);
	if (number == 0)
		string[0] = '0';
	else if (number < 0)
	{
		string[0] = '-';
		number *= -1;
	}
	while (number)
	{
		string[--places] = (number % 10) + '0';
		number /= 10;
	}
	return (string);
}
