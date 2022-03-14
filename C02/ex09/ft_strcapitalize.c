/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:06:01 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/13 15:08:37 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (('A' <= str[i] && str[i] <= 'Z')
			&& (('a' <= str[i - 1] && str[i - 1] <= 'z')
				|| ('A' <= str[i - 1] && str[i - 1] <= 'Z')
				|| ('0' <= str[i - 1] && str[i - 1] <= '9')))
				str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
// int	main(void)
// {
//     char str[] = "salut, comment tu vas ? 42mots te-deu; cinte+et+un";
//     ft_strcapitalize(str);
// }
