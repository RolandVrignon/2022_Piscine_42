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
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	tofind_len;

	tofind_len = 0;
	i = 0;
	while (tofind_len != '\0')
		tofind_len++;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return ('\0');
}

// int main () {
//     char *haystack = "des de";
//     char *needle = "de";
//     char *location;

// 	char *haystackb = "des de";
//     char *needleb = "de";
//     char *locationb;
// 	location = ft_strstr(haystack,needle);
// 	locationb = strstr(haystackb,needleb);

//     if( location == NULL)
//         printf("String not found\n");
//     else
//     {
//         printf("Le mot '%s' est a la position %ld dans la phrase '%s'.\n",
//             needle,
//             location-haystack+1,
//             haystack);
//     }

// 	if( locationb == NULL)
//         printf("String not found");
//     else
//     {
//         printf("Le mot '%s' est a la position %ld dans la phrase '%s'.\n",
//             needleb,
//             locationb-haystackb+1,
//             haystackb);
//     }
// 	return(0);
// }
