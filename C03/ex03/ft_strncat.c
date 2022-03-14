/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:26:54 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 15:26:56 by rvrignon         ###   ########.fr       */
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
    while (src[j] != '\0' && j <= nb)
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
//     unsigned int n = 2;
//     char * r;

//     r = ft_strncat(dest, src, n); 
//     printf("results : %s", r);
// }
