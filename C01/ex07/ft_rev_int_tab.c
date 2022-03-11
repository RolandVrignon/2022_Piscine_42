/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:26:51 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/10 20:06:17 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	print_array(int *tab, int size)
// {
// 	int i = 0;

// 	while( i<size )
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;
	int	d;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		c = tab[i];
		d = tab[j];
		tab[i] = d;
		tab[j] = c;
		i++;
		j--;
	}
}
// int	main(void)
// {
// 	int size = 10;
// 	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
// 	ft_rev_int_tab(array, size);
// }
