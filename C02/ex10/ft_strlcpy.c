/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:20:36 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/12 19:20:41 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int	dest_length;
	int	i;

	dest_length = str_len(dest);
	i = 0;
	if (size < dest_length)
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
}

int	main(void)
{
	char dest[] = "Unfsa";
	char src[] = "Roland";

	ft_strlcpy(dest, src, 7);
}