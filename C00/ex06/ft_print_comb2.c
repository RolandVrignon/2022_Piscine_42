/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 23:51:32 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/12 13:44:35 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	double_int(int nb)
{
	if (nb < 10)
	{
		write(1, "0", 1);
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb);
	}
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = -1;
	while (nb1++ < 99)
	{
		nb2 = nb1;
		while (nb2++ < 99)
		{
			if (!(nb1 == 0 && nb2 == 1))
				write(1, " ", 1);
			double_int(nb1);
			write(1, " ", 1);
			double_int(nb2);
			if (nb1 != 98)
				write(1, ",", 1);
		}
	}
}
//int	main(void)
//{
//	ft_print_comb2();
//}
