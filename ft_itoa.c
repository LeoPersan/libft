/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 18:07:56 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/31 18:07:56 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	number;
	int			places;
	char		*string;

	number = n;
	while (n)
	{
		n /= 10;
		places++;
	}
	places += (number <= 0);
	string = (char *) ft_calloc(places + 1, sizeof(char));
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
