/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:49:51 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/27 22:50:22 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

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
				fill_tab(st[0], st[1], tab[i], s);
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
	tab[size - 1] = NULL;
	return (process(size, tab, str, charset));
}

unsigned int	strlen_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ' ')
		i++;
	return (i);
}

char	*ft_split_key(char *str)
{
	unsigned int	len;
	unsigned int	i;
	char			*key;

	i = 0;
	len = strlen_space(str);
	key = (char *)malloc(sizeof(char) * len + 1);
	while (str[i] != ' ' && str[i] != ':')
	{
		key[i] = str[i];
		i++;
	}
	return (key);
}
