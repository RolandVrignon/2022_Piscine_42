/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:44:29 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/10 21:44:02 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int x, int y, int z)
{
	x = x + '0';
	y = y + '0';
	z = z + '0';
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_print_numbers(x, y, z);
				if (!(x == 7 && y == 8 && z == 9))
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				z += 1;
			}
			y += 1;
		}
	x += 1;
	}
}

int	main(void)
{
	ft_print_comb();
}
