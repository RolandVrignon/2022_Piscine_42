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

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned char	u1;
	unsigned char	u2;	

	while (n-- > 0)
	{
		u1 = (unsigned char) *s1++;
		u2 = (unsigned char) *s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
	}
	return (0);
}

// int main(void)
// {
//     char s1[] = "Hello Warld";
//     char s2[] = "Hello World";
//     int n = 10;
//     int r;

//     r = ft_strncmp(s1, s2, n); 
//     printf("results : %d", r);
// }
