/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:06:01 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/13 01:50:20 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	ft_strcapitalize(char *str)
{
	int	i;
	int	boolean;

	i = 0;
	boolean = 1;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z') && boolean == 1)
		{
			str[i] = str[i] - 32;
			boolean = 0;
		}
		else if (str[i] <= 47)
			boolean = 1;
		write(1, &str[i], 1);
		i++;
	}
	return (*str);
}
// int	main(void)
// {
//     char str[] = "salut, comment tu vas ? cinquante+et+un";
//     ft_strcapitalize(str);
// }
