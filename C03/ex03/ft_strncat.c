/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:26:54 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 15:41:41 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
//    // Take any two strings
//    char src[50] = "efghijkl";
//    char dest[50]= "abcd";
//    // Appends 5 character from src to dest
//    strncat(dest, src, 5);
//    // Prints the string
//    printf("Source string : %s\n", src);
//    printf("Destination string : %s", dest);
//    return 0;
// }