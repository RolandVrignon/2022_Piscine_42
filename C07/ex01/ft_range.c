/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 03:32:08 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/28 03:32:10 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;

	i = 0;
	if (min >= max)
	{
		p = NULL;
		return (p);
	}
	p = malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (NULL);
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
/*
int main ()
{
	int	*tab = ft_range(-3, 7);
	printf("test : %d\n", tab[4]);
	return (0);
}
*/
