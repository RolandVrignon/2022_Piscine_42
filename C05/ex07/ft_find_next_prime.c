/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:57:02 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/16 14:10:35 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2 || nb > INT_MAX)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb > INT_MAX)
		return (0);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb) != 1)
		{
			if (nb > INT_MAX)
				return (0);
			nb++;
		}
		return (nb);
	}
}

// int main ()
// {
//     printf("Resultat : %d", ft_find_next_prime(2854));
// }
