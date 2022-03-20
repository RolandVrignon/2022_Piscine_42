/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:43:18 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/20 18:45:20 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int		check_size(char *str);
int		check_str(char *str);
int		**ft_init_tab(int size);
int		**ft_conditions(char *str, int size);
int		solve_tab(int **tab, int r, int c, int **conditions);
void	ft_print_tab(int **tab, int size);
int		pre_solve_rows(int **tab, int **conditions, int size);
int		pre_solve_column(int **tab, int **conditions, int size);

int	main(int ac, char **av)
{
	int	**tab;
	int	**conditions;
	int	size;

	if (ac != 2)
	{
		write (1, "Error", 5);
		return (0);
	}
	size = check_str(av[1]);
	if (size == 0)
	{
		write (1, "Error", 5);
		return (0);
	}
	tab = ft_init_tab(size);
	conditions = ft_conditions(av[1], size);
	if (solve_tab(tab, 0, 0, conditions))
		ft_print_tab(tab, size);
	else
		write (1, "Error", 5);
	free(tab);
	free(conditions);
	return (0);
}
