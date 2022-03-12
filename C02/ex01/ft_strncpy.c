/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:30:22 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/12 16:30:25 by rvrignon         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	dest_length;
	int	src_length;
	int	i;

	dest_length = str_len(dest);
	src_length = str_len(src);
	i = 0;
	if (n <= dest_length)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
}

// int	main(void)
// {
// 	char dest[] = "Unfsa";
// 	char src[] = "Roland";

// 	*ft_strncpy(dest, src, 3);
// }
