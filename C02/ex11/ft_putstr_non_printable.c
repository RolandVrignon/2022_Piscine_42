/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 21:38:30 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 19:53:21 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_to_hexadecimal(unsigned char decimal)
{
	int		n;
	int		reminder;
	char	*base;

	base = "0123456789abcdef";
	n = decimal / 16;
	reminder = decimal % 16;
	write(1, "\\", 1);
	write(1, &base[n], 1);
	write(1, &base[reminder], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			char_to_hexadecimal(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

// int main(void)
// {
//     char test[] = "Coucou\btu vas bi🌭en ?";
//     ft_putstr_non_printable(test);
// }
