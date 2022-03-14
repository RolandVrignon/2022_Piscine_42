/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:17:33 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 15:17:35 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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
//     char * r;

//     r = ft_strcat(dest, src); 
//     printf("results : %s", r);
// }