/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:28:35 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 14:29:36 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
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
//     char s2[] = "Hello";
//     int r;

//     r = ft_strcmp(s1, s2); 
//     printf("results : %d", r);
// }
