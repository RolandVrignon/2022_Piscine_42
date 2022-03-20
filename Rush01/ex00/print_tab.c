/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:37:35 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/20 22:37:38 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

void	ft_print_tab(int **tab, int size)
{
	int	i;
	int	j;

	i = -1;
	while (i++ < size - 1)
	{
		j = -1;
		while (j++ < size - 2)
		{
			ft_putnbr(tab[i][j]);
			write(1, " ", 1);
		}
		ft_putnbr(tab[i][j]);
		write(1, "\n", 1);
	}
}
