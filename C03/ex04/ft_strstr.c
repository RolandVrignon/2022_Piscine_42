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

// #include <stdio.h>
// #include <string.h>

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

// int main () {
//     char *haystack = "Benzema est une pute";
//     char *needle = "pute";
//     char *location;

// 	char *haystackb = "Benzema est une pute";
//     char *needleb = "pute";
//     char *locationb;
// 	location = ft_strstr(haystack,needle);
// 	locationb = strstr(haystackb,needleb);

//     if( location == NULL)
//         perror("String not found");
//     else
//     {
//         printf("Le mot '%s' a la position %ld dans la phrase '%s'.\n",
//             needle,
//             location-haystack+1,
//             haystack);
//     }

// 	if( locationb == NULL)
//         perror("String not found");
//     else
//     {
//         printf("Le mot '%s' a la position %ld dans la phrase '%s'.\n",
//             needleb,
//             locationb-haystackb+1,
//             haystackb);
//     }
// 	return(0);
// }
