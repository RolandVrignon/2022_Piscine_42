/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:48:48 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/20 22:15:40 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_top(int **tab, int **conditions, int c, int size)
{
	int nb;
	int compteur;
	int max;
	int i;

	i = -1;
	max = 0;
	nb = conditions[0][c];
	compteur = 0;
	while (i++ < size - 1)
	{
		if (tab[i][c] == 0)
		{
			compteur = 0;
			break;
		}
		if (tab[i][c] > max)
		{
			compteur = compteur + 1;
			max = tab[i][c];
		}
	}
	if (compteur != nb && compteur != 0)
		return (0);
	return (1);
}

int check_bottom(int **tab, int **conditions, int c, int size)
{
	int nb;
	int compteur;
	int max;

	nb = conditions[1][c];
	compteur = 0;
	max = 0;
	while (size != 0)
	{
		if (tab[size - 1][c] == 0)
		{
			compteur = 0;
			break;
		}
		if (tab[size - 1][c] > max)
		{
			compteur = compteur + 1;
			max = tab[size - 1][c];
		}
		size--;
	}
	if (compteur != nb && compteur != 0)
		return (0);
	return (1);
}

int check_left(int **tab, int **conditions, int r, int size)
{
	int nb;
	int compteur;
	int max;
	int i;

	i = -1;
	nb = conditions[2][r];
	compteur = 0;
	max = 0;
	while (i++ < size - 1)
	{
		if (tab[r][i] == 0)
		{
			compteur = 0;
			break;
		}
		if (tab[r][i] > max)
		{
			compteur = compteur + 1;
			max = tab[r][i];
		}
	}
	if (compteur != nb && compteur != 0)
		return (0);
	return (1);
}

int check_right(int **tab, int **conditions, int r, int size)
{
	int nb;
	int compteur;
	int max;

	nb = conditions[3][r];
	compteur = 0;
	max = 0;
	while (size != 0)
	{
		if (tab[r][size - 1] == 0)
		{
			compteur = 0;
			break;
		}
		if (tab[r][size - 1] > max)
		{
			compteur = compteur + 1;
			max = tab[r][size - 1];
		}
		size--;
	}
	if (compteur != nb && compteur != 0)
		return (0);
	return (1);
}

int is_complete(int **tab, int size)
{
	int i;
	int j;

	i = -1;
	while (i++ < size - 1)
	{
		j = -1;
		while (j++ < size - 1)
		{
			if (tab[i][j] == 0)
				return (0);
		}
	}
	return (1);
}
