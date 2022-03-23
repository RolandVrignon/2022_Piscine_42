/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:17:20 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/22 18:18:50 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	unsigned int	i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	while (!(ft_is_prime(nb)) && nb <= INT_MAX)
		nb++;
	return (nb);
}

// int    main()
// {
//     printf("%d\n", ft_find_next_prime(4));
//     printf("%d\n", ft_find_next_prime(14));
// 	   printf("%d\n", ft_find_next_prime(2147483647));
// }
