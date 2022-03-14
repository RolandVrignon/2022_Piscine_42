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

// #include <stdio.h>
// #include <unistd.h>

unsigned int	str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_length;
	unsigned int	i;

	src_length = str_len(src);
	i = 0;
	if (src_length + 1 < size)
	{
		while (i <= src_length + 1){
			dest[i] = src[i];
			i++;
		}
	}
	else if (size != 0)
	{
		while (i <= size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[size - 1] = '\0';
	}
	return (src_length);
}

// int	main(void)
// {
// 	char src[] = "Hello there, Venus";
// 	char buffer[19];
// 	int size = 10;
// 	int r;

// 	r = ft_strlcpy(buffer, src, size);

//     printf("Copied '%s' into '%s', length %d\n",
//             src,
//             buffer,
//             r
//           );
// }
