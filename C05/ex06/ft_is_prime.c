/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:48:04 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/16 13:55:50 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <limits.h>

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

//int main()
//{
//    printf("Resultat : %d", ft_is_prime(138));
//}
