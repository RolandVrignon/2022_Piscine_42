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
	while (str[i] < 32 || str[i] > 126 || str[i] == '-' || str[i] == '+'
		|| (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			positif = positif * -1;
		else if (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb = nb * positif;
	return (nb);
}

// int	main()
// {
// 	char	str[] = "---+----12334dfg45";
// 	int	a;

// 	a = ft_atoi(str);
// 	printf("resultat :%d", a);    
// }
