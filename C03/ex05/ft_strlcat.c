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
	int				j;
	int				d_len;
	int				s_len;

	i = 0;
	j = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	while (dest[i])
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (d_len + s_len);
}

int main(void)
{
	char first[] = "This is ";
	char last[] = "a potentially long string";
	int size = 16;
	char buffer[size];
	int r;

	strcpy(buffer, first);
	r = ft_strlcat(buffer,last,size);
	puts(buffer);
	printf("Value returned: %d\n",r);
	if( r > size )
		puts("String truncated");
	else
		puts("String was fully copied");
	return(0);
}
