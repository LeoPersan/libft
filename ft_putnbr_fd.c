/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:46:27 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 11:02:07 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int number, int file_descriptor)
{
	if (number < 0)
	{
		write(file_descriptor, "-", 1);
		if (number == -2147483648)
		{
			write(file_descriptor, "2", 1);
			number = -147483648;
		}
		ft_putnbr_fd(number * -1, file_descriptor);
	}
	else if (number > 9)
	{
		ft_putnbr_fd((number / 10), file_descriptor);
		ft_putchar_fd((number % 10) + '0', file_descriptor);
	}
	else
		ft_putchar_fd(number + '0', file_descriptor);
}
