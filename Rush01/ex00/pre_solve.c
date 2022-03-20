/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:25:33 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/20 19:25:35 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	pre_solve_rows(int **tab, int **conditions, int size)
{
	int	i;
	int	j;

	i = -1;
	while (i++ < size)
	{
		if (conditions[2][i] == size)
		{
			j = -1;
			while (j++ < size - 1)
			tab[i][j] = j + 1;
		}
		if (conditions[2][i] == 1)
			tab[i][0] = size;
		if (conditions[3][i] == size)
		{
			j = -1;
			while (j++ < size - 1)
				tab[i][size - j - 1] = j + 1;
		}
		if (conditions[3][i] == 1)
			tab[i][size - 1] = size;
	}
	return (1);
}

int	pre_solve_column(int **tab, int **conditions, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		if (conditions[0][i] == size)
		{
			j = -1;
			while (j++ < size - 1)
				tab[j][i] = j + 1;
		}
		if (conditions[0][i] == 1)
			tab[0][i] = size;
		if (conditions[1][i] == size)
		{
			j = -1;
			while (j++ < size - 1)
				tab[size - j - 1][i] = j + 1;
		}
		if (conditions[1][i] == 1)
			tab[size - 1][i] = size;
		i++;
	}
	return (1);
}
