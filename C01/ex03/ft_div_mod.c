/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:29:26 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/10 20:07:12 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int	main(void)
// {
// 	int a = 42;
//     int b = 5;
// 	int * pa = &a;
//     int * pb = &b;
// 	printf("a = %d (adresse ; %p)\n", a, &a);
//     printf("b = %d (adresse ; %p)\n", b, &b);
// 	ft_div_mod(a, b, pa, pb);
// }
