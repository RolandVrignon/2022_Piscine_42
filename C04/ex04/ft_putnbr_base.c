/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 21:23:09 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 23:01:24 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

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
	int		i;
	long	nb;

	i = check_base(base);
	nb = nbr;
	if (i == 0)
		return ;
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(nbr * -1, base);
		return ;
	}
	else if (nbr > i)
	{
		ft_putnbr_base(nbr / i, base);
		ft_putnbr_base(nbr % i, base);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}
// int main(void)
// {
//     int nb = 12453;
//     char base[] = "01";   
//     ft_putnbr_base(nb, base);
// }
