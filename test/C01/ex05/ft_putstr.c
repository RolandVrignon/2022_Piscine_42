/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:53:09 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/10 21:40:17 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		++n;
	}
}
//int main(void)
//{
//    char str[] = "jjhfsklakjdfhsdajkfhksaljdfhkjasldfhkladh";
//    ft_putstr(str);
//}
