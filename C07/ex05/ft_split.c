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

void	fill_tab(int index, int last_index, char *tab, char *str)
{
	int	i;

	i = 0;
	if (str[last_index] == '\0')
	{	
		while (str[index] != '\0')
		{
			tab[i] = str[index];
			index++;
			i++;
		}
	}
	else
	{
		while (index < last_index - 1)
		{
			tab[i] = str[index];
			index++;
			i++;
		}
	}
	tab[i] = '\0';
}

char	**process(int size, char **tab, char *s, char *ch)
{
	int	st;
	int	end;
	int	i;
	int	j;

	j = -1;
	i = -1;
	while (i++ < size - 2)
	{
		st = -1;
		while (s[++j] != '\0')
		{
			if (!x(s[j], ch) && (x(s[j - 1], ch) || j == 0))
				st = j;
			if (x(s[j], ch) && !x(s[j - 1], ch) && st != -1 || s[j + 1] == '\0')
				end = j + 1;
			if (st != -1 && end > st)
			{
				tab[i] = malloc(sizeof(char) * ((end - st) + 1));
				fill_tab(st, end, tab[i], s);
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
	tab[size - 1] = malloc(sizeof(char) * 1);
	tab[size - 1][0] = '0';
	return (process(size, tab, str, charset));
}

int main()
{
    char str[] = "d--dsjh-daslk-djlks-s";
    char charset[] = "-/|";
    char **tab;
    tab = ft_split(str, charset);
    int i = 0;
    while (tab[i])
    {
        printf("%d Adresse : %p : %s\n",i, tab[i], tab[i]);
        i++;
    }
    return (0);
}
