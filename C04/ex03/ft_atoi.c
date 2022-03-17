/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 21:23:02 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 22:06:43 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	positif;
	int	nb;

	i = 0;
	nb = 0;
	positif = 1;
	
	while (str[i] < 33 || str[i] > 126 )
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			positif = positif * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * positif);
}

int	main()
{
	char	str[] = " ---+--+1234ab567";
	int	a;
	a = ft_atoi(str);
	printf("resultat :%d", a);    
}
