/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:43:24 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/16 23:17:03 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main( int argc, char **argv)
{
	int	i;

	(void) argc;
	(void) argv;
	i = 1;
	while (i <= argc)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		if (i != argc)
		{
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
