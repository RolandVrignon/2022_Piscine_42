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

#include <stdio.h>
#include <string.h>

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

int main(void)
{
   char srca[50] = "efghijkl";
   char desta[50]= "abcd";
   char srcb[50] = "efghijkl";
   char destb[50]= "abcd";

   ft_strncat(desta, srca, 2);
   strncat(destb, srcb, 2);
   printf("Source string : %s\n", srca);
   printf("Destination string : %s\n\n", desta);
   printf("Source string : %s\n", srcb);
   printf("Destination string : %s", destb);
   return 0;
}