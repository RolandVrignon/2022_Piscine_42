/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_param.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 04:09:37 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/17 04:13:09 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (av[i][0] > av[j][0])
			{
				tmp = av[j];
				av[j] = av[i];
				av[i] = tmp;
			}
			j++;
		}
	i++;
	}
}

int	main(int argc, char **argv)
{
	int	l;

	l = 1;
	ft_sort(argc, argv);
	while (l < argc)
	{
		while (*argv[l])
		{
			write (1, argv[l], 1);
			argv[l]++;
		}
		write (1, "\n", 1);
		l++;
	}
	return (0);
}
