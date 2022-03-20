/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:43:06 by lbonnet-          #+#    #+#             */
/*   Updated: 2022/03/20 18:53:32 by lbonnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_top(int **tab, int **conditions, int c, int size);
int	check_bottom(int **tab, int **conditions, int c, int size);
int	check_left(int **tab, int **conditions, int r, int size);
int	check_right(int **tab, int **conditions, int r, int size);
int	is_complete(int **tab, int size);

int	check_double(int **tab, int r, int c, int size)
{
	int	i;
	int	go;

	i = 0;
	go = 0;
	while (i < size - 1)
	{
		if (tab[i][c] == tab[r][c] && r != i)
			return (0);
		i++;
	}
	go = go + 1;
	i = 0;
	while (i < size - 1)
	{
		if (tab[r][i] == tab[r][c] && c != i)
			return (0);
		i++;
	}
	go = go + 1;
	if (go == 2)
		return (1);
	return (0);
}

int	cbc(int **tab, int **conditions, int r, int c)
{
	int	size;

	size = 4;
	if (tab[r][c] != 0 && check_top(tab, conditions, c, size)
		&& check_bottom(tab, conditions, c, size)
		&& check_left(tab, conditions, r, size)
		&& check_right(tab, conditions, r, size))
		return (1);
	return (0);
}

int	*ft_next(int r, int c, int size)
{
	int	*tab;

	tab = malloc(sizeof(int) * 5);
	if (c < size - 1)
	{
		tab[0] = r;
		tab[1] = c + 1;
		return (tab);
	}
	else if (c == size - 1 && r != size - 1)
	{
		tab[0] = r + 1;
		tab[1] = 0;
		return (tab);
	}
	else
	{
		tab[0] = 0;
		tab[1] = 0;
		return (tab);
	}
}

int	solve_tab(int **tab, int r, int c, int **conditions)
{
	int	i;
	int	*next;
	int	size;

	size = 4;
	next = ft_next(r, c, size);
	if (is_complete(tab, size))
		return (1);
	if (tab[r][c] == 0)
	{
		i = 0;
		while (i++ <= size - 1)
		{
			tab[r][c] = i;
			if (check_double(tab, r, c, size) && cbc(tab, conditions, r, c))
			{
				if (solve_tab(tab, next[0], next[1], conditions))
					return (1);
			}
		}
		tab[r][c] = 0;
		return (0);
	}
	solve_tab(tab, next[0], next[1], conditions);
	return (1);
}
