/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:41:08 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/23 16:41:55 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     is_sep(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i] != '\0')
    {
        if (charset[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int     how_many_str(char *str, char *charset)
{
    int i;
    int j;
    int nb;

    i = 0;
    nb = 0;
    if(!is_sep(str[0], charset))
        nb = nb + 1;
    while (str[i] != '\0')
    {
        if (is_sep(str[i], charset) && !is_sep(str[i + 1], charset) && str[i + 1] != '\0')
            nb = nb + 1;
        i++;
    }

    return (nb + 1);
}

void    fill_tab(int index, int last_index, char *tab, char *str)
{
    int i;

    i = 0;
    while(index < last_index)
    {
        tab[i] = str[index];
        index++;
        i++;
    }
    tab[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int	i;
    int index;
    int last_index;
    int j;
    char **tab;
    int size;

    size = how_many_str(str, charset);
    tab = malloc(sizeof(char *) * (size));

	i = 0;
    j = 0;
	while (i < size)
	{
        if(!is_sep(str[0], charset) && j == 0)
            index = 0;
        else
            index = -1;
        last_index = -1;
        while (str[j] != '\0')
        {
            if (!is_sep(str[j], charset) && is_sep(str[j - 1], charset) && str[j + 1] != '\0' && index == -1)
                index = j;
            else if (is_sep(str[j], charset) && (!is_sep(str[j - 1], charset) || str[j + 1] != '\0') && index != -1)
                last_index = j;
            else if (index != -1 && str[j + 1] == '\0')
                last_index = j + 1;
            if (index != -1 && last_index != -1)
            {
                tab[i] = malloc(sizeof(char) * (last_index - index));
                fill_tab(index, last_index, tab[i], str);
                break ;
            }
            j++;
        }
        i++;
	}
    tab[i - 1] = malloc(sizeof(char) * 1);
    tab[i - 1][0] = '0';
    return (tab);
}

int main()
{
    char str[] = "-----------ba|bcd-ef////ghij|bhfsj-------dk---";
    char charset[] = "-/|";
    char **tab;
    tab = ft_split(str, charset);
    
    int i = 0;

    while (i < 6)
    {
        printf("%d Adresse : %p : %s\n",i, tab[i], tab[i]);
        i++;
    }
    return (0);
}
