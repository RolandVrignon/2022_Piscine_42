/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:57:03 by lbonnet-          #+#    #+#             */
/*   Updated: 2022/03/20 22:58:44 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

int	check_size(char *str)
{
	int	i;
	int	counter;
	int	r;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
			counter = counter + 1;
		if (!('0' <= str[i] && str[i] <= '9') && str[i] != 32)
			return (0);
		i++;
	}
	r = 0;
	if (counter > 0)
	{
		while (r * 4 < counter)
			r++;
		if (!(r * 4 == counter))
			return (0);
		return (r);
	}
	return (0);
}

int	check_str(char *str)
{
	int	i;
	int	variator;

	i = 0;
	variator = 0;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
			variator = variator + 1;
		if (str[i] == 32)
			variator = variator - 1;
		if (variator > 1 || variator < 0)
			return (0);
		i++;
	}
	if (!('0' <= str[0] && str[0] <= '9')
		|| !('0' <= str[i - 1] && str[i - 1] <= '9'))
		return (0);
	return (check_size(str));
}

int	**allocate_conditions(int size)
{
	int	**conditions;
	int	i;

	conditions = malloc(sizeof(int *) * 4);
	i = -1;
	while (i++ < size - 1)
		conditions[i] = malloc(sizeof(int) * size);
	return (conditions);
}

int	**ft_conditions(char *str, int size)
{
	int	**conditions;
	int	i;
	int	j;
	int	counter;

	conditions = allocate_conditions(size);
	i = 0;
	j = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (counter % size == 0 && counter > 0)
		{
			j = j + 1;
			counter = 0;
		}
		if ('0' <= str[i] && str[i] <= '9')
		{
			conditions[j][counter] = str[i] - '0';
			counter++;
		}
		i++;
	}
	return (conditions);
}

int	**ft_init_tab(int size)
{
	int	**tab;
	int	i;
	int	j;

	tab = malloc(sizeof(int *) * size);
	i = -1;
	while (i++ < size - 1)
		tab[i] = malloc(sizeof(int) * size);
	i = -1;
	while (i++ < size - 1)
	{
		j = -1;
		while (j++ < size - 1)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
