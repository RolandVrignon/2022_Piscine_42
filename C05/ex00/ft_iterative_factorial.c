/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:55:30 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/16 13:12:17 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb >= 1)
	{
		r = r * nb;
		nb--;
	}
	return (r);
}

// int main()
// {
//     printf("Resultat :%d", ft_iterative_factorial(0));
// }
