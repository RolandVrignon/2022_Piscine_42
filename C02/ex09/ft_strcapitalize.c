/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:06:01 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/13 03:40:28 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	gain_of_line(char *str, int i, int up, int low)
{
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z') && up == 1)
		{
			str[i] = str[i] - 32;
			up = 0;
			low = 1;
		}
		else if (('A' <= str[i] && str[i] <= 'Z') && low == 1)
		{
			str[i] = str[i] + 32;
			low = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			up = 0;
		else if (str[i] <= 64 || (str[i] >= 91 && str[i] <= 96))
		{
			up = 1;
			low = 0;
		}
		else if (up == 1)
			up = 0;
		write(1, &str[i], 1);
		i++;
	}
}

char	ft_strcapitalize(char *str)
{
	int		i;
	int		uppercase;
	int		lowercase;

	i = 0;
	uppercase = 1;
	lowercase = 0;
	gain_of_line(str, i, uppercase, lowercase);
	return (*str);
}

// int	main(void)
// {
//     char str[] = "salut, comment tu vas ? 42mots cinquante+et+un";
//     ft_strcapitalize(str);
// }
