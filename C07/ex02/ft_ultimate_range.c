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
	long long int	i;
	long long int	diff;

	if (max <= min)
	{
		range = NULL;
		return (0);
	}
	diff = max - min;
	range[0] = malloc(diff * sizeof(int));
	if (!range[0])
		return (0);
	i = -1;
	while (++i < diff)
		range[0][i] = min++;
	i = 0;
	while (range[i])
		i++;
	return (i);
}

// int main()
// {
//     int **range;
//     int min;
//     int max;
//     int nb;

//     min = -32;
//     max = 30;

//     range = malloc(sizeof(int) * 2);

//     nb = ft_ultimate_range(range, min, max);
//     printf("Return : %d", nb);
// }
