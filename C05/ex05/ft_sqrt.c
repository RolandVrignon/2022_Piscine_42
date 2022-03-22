/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:38:16 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/16 23:11:43 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	if (nb > INT_MAX || nb < 0)
		return (0);
	if (nb > 0)
	{
		while (r <= 46340 && r * r < nb)
			r++;
		if (!(r * r == nb))
			return (0);
		return (r);
	}
	return (0);
}

// int main()
// {
//     printf("Resultat : %d", ft_sqrt(26));
// }
