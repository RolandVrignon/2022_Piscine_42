/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:28:35 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 15:43:59 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((*(s1 + i) || *(s2 + i)))
	{
		if ((*(s1 + i) != *(s2 + i)))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char s1[] = "Hello";
//     char s2[] = "Hells";
//     int r;
// 	int b;

//     r = ft_strcmp(s1, s2);
// 	b = strcmp(s1, s2);  
//     printf("results A : %d\n", r);
// 	printf("results B : %d", b);
// }
