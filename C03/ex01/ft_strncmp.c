/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:08:02 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 15:08:05 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		if(s2[i] == '\0' && s1[i] != '\0')
			return (100);
		else if(s1[i] == '\0' && s2[i] != '\0' )
			return (-100);
		else if(s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

// int main(void)
// {
//     char s1[] = "Hello";
//     char s2[] = "Hella";
//     int n = 6;
//     int r;

//     r = ft_strncmp(s1, s2, n); 
//     printf("results : %d", r);
// }