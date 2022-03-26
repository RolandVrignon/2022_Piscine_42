/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:42:23 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/18 01:42:24 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int				i;
	unsigned int	range;
	int				*buffer;

	if (min >= max)
		return (0);
	range = max - min;
	buffer = malloc(sizeof(int) * range);
	if (!buffer)
		return (0);
	i = -1;
	while (++i < max)
	{
		buffer[i] = min + i;
	}
	return (buffer);
}

// int	main(int ac, char **av)
// {
// 	int				min;
// 	int				max;
// 	int				range;
// 	int				*buffer;
// 	unsigned int	i;

// 	min = 0;
// 	max = 14;
// 	range = max - min;
// 	buffer = ft_range(min, max);
// 	i = 0;
// 	while (i < range)
// 	{
// 		i++;
// 	}
// 	return (0);
// }
