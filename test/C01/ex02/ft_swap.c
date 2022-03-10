/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:54:14 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/10 16:27:50 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}

/*int	main(void)
{
	int a = 10;
    int b = 5;
	int * pa = &a;
    int * pb = &b;
	printf("a = %d (adresse ; %p)\n", a, &a);
    printf("b = %d (adresse ; %p)\n", b, &b);
	ft_swap(pa, pb);
}*/
