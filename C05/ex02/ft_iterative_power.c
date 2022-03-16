/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:15:22 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/16 13:25:54 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (!(power >= 0))
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			r = r * nb;
			power--;
		}
		return (r);
	}		
}

// int main()
// {
//    printf("Resultat : %d", ft_iterative_power(5, 2));
// }
