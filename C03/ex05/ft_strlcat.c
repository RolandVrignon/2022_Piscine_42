/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:03:46 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/15 18:52:06 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;

	i = 0;
	d_len = ft_strlen(dest);
	j = d_len;
	if (d_len >= size)
		return (size + ft_strlen(src));
	else
	{
		while (j < size - j - 1 && src[i] != '\0')
		{
			dest[j + i] = src[i];
			i++;
		}
		dest[j + i] = '\0';
		return (ft_strlen(src) + d_len);
	}
}

// int main(void)
// {
// 	int size = 64;
// 	char dest[64] = "This is ";
// 	char src[] = "a potentially long string";
// 	int r;

// 	r = ft_strlcat(dest,src,size);
// 	printf ("%s\n", dest);
// 	printf("Value returned: %d\n",r);
// 	if( r > size )
// 		puts("String truncated");
// 	else
// 		puts("String was fully copied");
// 	return(0);
// }
