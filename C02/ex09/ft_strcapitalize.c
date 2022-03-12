/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:06:01 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/12 19:06:03 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	ft_strcapitalize(char *str)
{
	int	i;
    int bool;

	i = 0;
    bool = 1;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z') && bool == 1)
		{
			str[i] = str[i] - 32;
            bool = 0;
		}
        else if (str[i] <= 47)
        {
            bool = 1;
        }
        write(1, &str[i], 1);
		i++;
	}
	return (*str);
}
// int	main(void)
// {
//     char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//     ft_strcapitalize(str);
// }