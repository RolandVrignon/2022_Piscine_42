/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:16:55 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/10 18:24:57 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_strlen(char *str)
{
	int	n;

	n = -1;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}
// int main(void)
// {
//     char str[] = "rOLA";
//     ft_strlen(str);
// }
