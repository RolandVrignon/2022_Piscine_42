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

#include <stdio.h>
#include <string.h>

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
	unsigned int	d_len;
	unsigned int	d_len_cp;

	i = 0;
	d_len = ft_strlen(dest);
	d_len_cp = d_len;
	if (d_len >= size)
		return (size + ft_strlen(src));
	else
	{
		while (d_len < size - 1 && src[i] != '\0')
		{
			dest[d_len] = src[i];
			i++;
			d_len++;
		}
		dest[d_len] = '\0';
		return (ft_strlen(src) + d_len_cp);
	}
}

// int main(void)
// {
// 	char first[] = "This is ";
// 	char last[] = "a potentially long string";
// 	int size = 30;
// 	char buffer[size];
// 	int r;

// 	strcpy(buffer, first);
// 	r = ft_strlcat(buffer,last,size);
// 	puts(buffer);
// 	printf("Value returned: %d\n",r);
// 	if( r > size )
// 		puts("String truncated");
// 	else
// 		puts("String was fully copied");
// 	return(0);
// }
