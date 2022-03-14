/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:38:21 by rvrignon          #+#    #+#             */
/*   Updated: 2022/03/14 17:10:49 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;
	int	tofind_len;

	tofind_len = ft_strlen(to_find);
	i = 0;
	while (str[i] != '\0')
	{
		k = i;
		j = 0;
		if (str[k] == to_find[j])
		{
			while (str[k] == to_find[j])
			{
				if ((str[k] == to_find[tofind_len - 1]) && j + 1 == tofind_len)
					return (&str[i]);
				k++;
				j++;
			}
		}
		i++;
	}
	return ('\0');
}
int main () {
   char haystack[] = "MarsMPaaasaadas";
   char needle[] = "aaa";
   char *ret;

   ret = ft_strstr(haystack, needle);
   printf("The substring is: %s\n", ret);
   return(0);
}
