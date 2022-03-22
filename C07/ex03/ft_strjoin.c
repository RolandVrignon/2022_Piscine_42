/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 00:45:59 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/22 00:52:03 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	calculate_size(char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	len;
	int	isep;

	isep = 0;
	j = 0;
	len = 0;
	while (sep[isep] != '\0')
		isep++;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			len++;
		}
		i++;
	}
	return (len + (isep * i));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		h;
	char	*final;

	final = malloc(sizeof(char) * calculate_size(strs, size, sep));
	i = 0;
	j = 0;
	h = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			final[h++] = strs[i][j++];
		j = 0;
		if (i != size - 1)
		{
			while (sep[j] != '\0')
				final[h++] = sep[j++];
		}
		i++;
	}
	final[h] = '\0';
	return (final);
}

// int main()
// {
//     char **strs;
//     int size = 3;
//     char sep[] = ". ";

//     strs = malloc(sizeof(char*) * size);
//     strs[0] = malloc(sizeof(char) * 120);
//     strs[1] = malloc(sizeof(char) * 150);

//     strs[0] = "Ceci est ma premiere phrase";
//     strs[1] = "Et puis voici ma deuxieme phrase";
//     strs[2] = "Et la ma derniere";
//     printf("Str1 : %s\n", strs[0]);  
//     printf("Str2 : %s\n", strs[1]);
//     printf("Concat : %s\n", ft_strjoin(size, strs, sep));
//     free (strs);
//     return (0);
// }
