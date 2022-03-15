/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:08:02 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/15 15:40:02 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while ((*(s1 + i) || *(s2 + i)) && i < n)
	{
		if ((*(s1 + i) != *(s2 + i)))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}

int main(void)
{
    char s1[] = "Hel";
    char s2[] = "Hellllllpllll";
    int n = 196;
    int r;
	int b;

    r = ft_strncmp(s1, s2, n);
	b = strncmp(s1, s2, n);  
    printf("results A: %d\n", r);
	printf("results B: %d", b);
}
