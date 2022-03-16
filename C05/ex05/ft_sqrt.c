/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:38:16 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/16 13:46:58 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	if (nb > INT_MAX)
		return (0);
	if (nb > 0)
	{
		while (r * r < nb)
			r++;
		return (r);
	}
	return (0);
}

// int main()
// {
//     printf("Resultat : %d", ft_sqrt(2147483649));
// }
