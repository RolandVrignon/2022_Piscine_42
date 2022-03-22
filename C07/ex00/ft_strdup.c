/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 04:38:06 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/21 19:39:04 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	while (src[len] != '\0')
		len++;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

// int main()
// {
//     char str[] = "Je testes Malloc";
//     char *pt;
//     pt = ft_strdup(str);
// 	printf("Adresse : %p || Originale : %s\n", str, str);
// 	printf("Adresse : %p || Copie : %s", pt, pt);
//     free(pt);
// }
