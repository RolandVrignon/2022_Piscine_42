/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:44:54 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/10 16:51:42 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}

/*int	main(void)
{
	int a = 42;
    int b = 5;
	int * pa = &a;
    int * pb = &b;
	printf("a = %d (adresse ; %p)\n", a, &a);
    printf("b = %d (adresse ; %p)\n", b, &b);
	ft_ultimate_div_mod(pa, pb);
}*/
