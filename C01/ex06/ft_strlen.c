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

//#include <unistd.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}
// int main(void)
// {
//     char str[] = "rOLAssss";
//     ft_strlen(str);
// }
