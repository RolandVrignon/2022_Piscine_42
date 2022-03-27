/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:05:44 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/27 23:28:51 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	is_numbers(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_dict	*dict;
	char	**tab;
	char	*tmp;

	if (ac == 3 && is_numbers(av[2]))
	{
		dict = create_list(ac, av[1]);
		tmp = av[1];
		av[1] = av[2];
		av[2] = tmp;
	}
	else if (ac == 2 && is_numbers(av[1]))
		dict = create_list(ac, "numbers.dict");
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	tab = triple_tab(av[1]);
	print_tab(dict, tab);
	free(tab);
	return (0);
}
