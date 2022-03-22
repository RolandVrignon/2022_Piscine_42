/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 21:23:09 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/17 20:18:22 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long		nb;

	i = check_base(base);
	nb = nbr;
	if (i == 0)
		return ;
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb >= i)
	{
		ft_putnbr_base((nb / i), base);
		ft_putnbr_base((nb % i), base);
	}
	else
	{
		write(1, &base[nb], 1);
	}
}

int main(void)
{
    int nb = 42;
    char base[] = "0123456789abcdef";   
    ft_putnbr_base(nb, base);
}
