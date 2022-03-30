/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:41:08 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/23 22:25:54 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	x(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	how_many_str(char *str, char *charset)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (!x(str[0], charset))
		nb = nb + 1;
	while (str[i] != '\0')
	{
		if (x(str[i], charset) && !x(str[i + 1], charset)
			&& str[i + 1] != '\0')
			nb = nb + 1;
		i++;
	}
	return (nb + 1);
}

void	fill_tab(int *st, char *tab, char *str, char *charset)
{
	int	i;

	i = 0;
	if (str[st[1]] == '\0' && !x(str[st[1] - 1], charset))
	{	
		while (str[st[0]] != '\0')
		{
			tab[i] = str[st[0]];
			st[0]++;
			i++;
		}
	}
	else
	{
		while (st[0] < st[1] - 1)
		{
			tab[i] = str[st[0]];
			st[0]++;
			i++;
		}
	}
	tab[i] = '\0';
}

char	**process(int size, char **tab, char *s, char *ch)
{
	int	st[2];
	int	i;
	int	j;

	j = -1;
	i = -1;
	while (i++ < size - 2)
	{
		st[0] = -1;
		while (s[++j] != '\0')
		{
			if (!x(s[j], ch) && (x(s[j - 1], ch) || j == 0))
				st[0] = j;
			if ((x(s[j], ch) && !x(s[j - 1], ch) && st[0] != -1)
				|| (st[0] != -1 && s[j + 1] == '\0'))
				st[1] = j + 1;
			if (st[0] != -1 && st[1] > st[0])
			{
				tab[i] = malloc(sizeof(char) * ((st[1] - st[0]) + 1));
				fill_tab(st, tab[i], s, ch);
				break ;
			}
		}
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;

	size = how_many_str(str, charset);
	if (size == 0)
		return (0);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (0);
	tab[size - 1] = malloc(sizeof(char) * 1);
	tab[size - 1] = 0;
	return (process(size, tab, str, charset));
}

// int main()
// {
//     char str[] = "BKI3fXhcuwKMzhuDGpPVdcBmflAEFSz1";
//     char charset[] = "IU Ci0";
//     char **tab;
//     tab = ft_split(str, charset);
//     int i = 0;
//     while (tab[i])
//     {
//         printf("%d Adresse : %p : %s\n",i, tab[i], tab[i]);
//         i++;
//     }
//     return (0);
// }
