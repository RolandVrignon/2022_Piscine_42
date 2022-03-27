/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:05:44 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/27 22:07:37 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	main(int ac, char **av)
{
	t_dict	*dict;
	char	**tab;

	if (ac != 2)
		return (0);
	dict = create_list(ac);
	tab = triple_tab(av[1]);
	print_tab(dict, tab);
}
