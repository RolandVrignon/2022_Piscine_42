/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 04:38:06 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/17 04:38:12 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    char *str;
    int len;

    len = 0;
    while (*src)
    {
        src++;
        len++;
    }
    str = malloc(sizeof(*src) * len);
    if (!str)
        return (0);
    return (str);
}

int main()
{
    char str[] = "Je testes Malloc";
    char *pt;
    pt = ft_strdup(str);
    printf("Adresse Str: %p\n", str);
    printf("Adresse Pt : %p\n", pt);
    free(pt);
}