/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:20:36 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/12 21:40:03 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	dest_length;
	int	src_length;
	int	i;

	dest_length = str_len(dest);
	src_length = str_len(src);
	i = -1;
	if (dest_length + 1 < size)
	{
		while (i++ <= src_length)
			dest[i] = src[i];
	}
	else if (size != 0)
	{
		while (i++ <= src_length)
			dest[i] = src[i];
		dest[size - 1] = '\0';
	}
	return (src_length);
}

// int	main(void)
// {
// 	char src[] = "La piscine c'est cool\n";
// 	char dest[19];
// 	int test;

// 	test = ft_strlcpy(dest, src, 2);
// }
