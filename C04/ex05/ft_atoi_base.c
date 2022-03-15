/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 21:23:19 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 21:23:31 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int is_in_base(char *str, char *base, int i)
{
    int j;

    j = 0;

    while (base[j] != '\0')
    {
        if (str[i] == base[j])
            return (j);
        j++;
    }
    return (-1);
}

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	positif;
	int	nb;
    int base_length;
    int a;

	i = 0;
	nb = 0;
	positif = 1;
    base_length = check_base(base);
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
            i++;
        if (str[i] == '-')
			positif = positif * -1;
		else if ((a = is_in_base(str, base, i)) != -1)
			nb = nb * base_length + a;
        else if ((a = is_in_base(str, base, i)) == -1)
			return (0);
		i++;
	}
    nb = nb * positif;
	return (nb);
}

int	main()
{
	char	str[] = "10011100";
    char    base[] = "01";
	int	a;
	a = ft_atoi(str, base);
	printf("resultat :%d", a);    
}

