/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:31:08 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/12 16:46:32 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z')
			&& !('a' <= str[i] && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int	main(void)
// {
// 	char str[] = "dasjkhdJ/KHKJH";
// 	ft_str_is_alpha(str);
// }

// !('A' <= str[i]  && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z')