/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:41:31 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:41:31 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	int		i;

	memory = malloc(count * size);
	i = 0;
	while (i < count * size)
		memory[i++] = 0;
	return (memory);
}
