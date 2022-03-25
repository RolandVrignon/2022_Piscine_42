/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:39:01 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/23 16:39:04 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	i;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	max -= min;
	*range = malloc(max * sizeof(int));
	if (!*range)
		return (-1);
	i = -1;
	while (++i < max)
		(*range)[i] = min + 1;
	return (max);
}

// int main()
// {
//     int **range;
//     int min;
//     int max;
//     int nb;

//     min = -1;
//     max = 19;

//     range = malloc(sizeof(int) * 2);

//     nb = ft_ultimate_range(range, min, max);
//     printf("Return : %d", nb);
// }
