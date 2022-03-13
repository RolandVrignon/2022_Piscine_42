/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 02:25:58 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/12 14:17:50 by rvrignon         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	dest_length;
	int	src_length;
	int	i;

	dest_length = str_len(dest);
	src_length = str_len(src);
	i = 0;
	if (dest_length >= src_length)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return(dest);
}

// int	main(void)
// {
// 	char dest[] = "Roland";
// 	char src[] = "Roland";

// 	*ft_strcpy(dest, src);
// }
