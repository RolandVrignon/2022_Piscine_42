/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:17:33 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 15:46:12 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
//     char dest[] = "Roland ";
//     char src[] = "Vrignon";
// 	char destb[] = "Roland ";
//     char srcb[] = "Vrignon";
//     char * r;
// 	char * b;

//     r = ft_strcat(dest, src); 
//     printf("results A: %s\n", r);
// 	b = strcat(destb, srcb); 
// 	printf("results B: %s", b);
// }
