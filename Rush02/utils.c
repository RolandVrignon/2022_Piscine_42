#include "utils.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{	
	int	strlen;

	strlen = 0;
	while (*str != '\0')
	{
		strlen ++;
		str++;
	}
	return (strlen);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (i = s1[i] - s2[i]);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	long int	ret;
	long int	i;
	int			sign;

	sign = 1;
	i = 0;
	ret = 0;
	while (str[i] >= '\a' && str[i] <= ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign;
			i++;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
			ret = ret * 10 + (str[i] - '0');
			i++;
		}
	}
	return (sign * ret);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
			|| ft_strlen(base) <= 1)
			return (0);
		j = i +1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return(0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	base_count;

	base_count = ft_strlen(base);
	if (ft_check_base(base) == 1)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= base_count)
		{
			ft_putnbr_base((nb / base_count), base);
			ft_putnbr_base((nb % base_count), base);
		}
		else
			ft_putchar(base[nb]);
	}
}
  
 int        x(char c, char *charset) 
 { 
         int        i; 
  
         i = 0; 
         while (charset[i] != '\0') 
         { 
                 if (charset[i] == c) 
                         return (1); 
                 i++; 
         } 
         return (0); 
 } 
  
 int        how_many_str(char *str, char *charset) 
 { 
         int        i; 
         int        nb; 
  
         i = 0; 
         nb = 0; 
         if (!x(str[0], charset)) 
                 nb = nb + 1; 
         while (str[i] != '\0') 
         { 
                 if (x(str[i], charset) && !x(str[i + 1], charset) 
                         && str[i + 1] != '\0') 
                         nb = nb + 1; 
                 i++; 
         } 
         return (nb + 1); 
 } 
  
 void        fill_tab(int index, int last_index, char *tab, char *str) 
 { 
         int        i; 
  
         i = 0; 
         if (str[last_index] == '\0') 
         {         
                 while (str[index] != '\0') 
                 { 
                         tab[i] = str[index]; 
                         index++; 
                         i++; 
                 } 
         } 
         else 
         { 
                 while (index < last_index - 1) 
                 { 
                         tab[i] = str[index]; 
                         index++; 
                         i++; 
                 } 
         } 
         tab[i] = '\0'; 
 } 
  
 char        **process(int size, char **tab, char *s, char *ch) 
 { 
         int        st[2]; 
         int        i; 
         int        j; 
  
         j = -1; 
         i = -1; 
         while (i++ < size - 2) 
         { 
                 st[0] = -1; 
                 while (s[++j] != '\0') 
                 { 
                         if (!x(s[j], ch) && (x(s[j - 1], ch) || j == 0)) 
                                 st[0] = j; 
                         if ((x(s[j], ch) && !x(s[j - 1], ch) && st[0] != -1) 
                                 || (st[0] != -1 && s[j + 1] == '\0')) 
                                 st[1] = j + 1; 
                         if (st[0] != -1 && st[1] > st[0]) 
                         { 
                                 tab[i] = malloc(sizeof(char) * ((st[1] - st[0]) + 1)); 
                                 fill_tab(st[0], st[1], tab[i], s); 
                                 break ; 
                         } 
                 } 
         } 
         return (tab); 
 } 
  
 char        **ft_split(char *str, char *charset) 
 { 
         char        **tab; 
         int                size; 
  
         size = how_many_str(str, charset); 
         if (size == 0) 
                 return (0); 
         tab = malloc(sizeof(char *) * (size + 1)); 
         if (!tab) 
                 return (0); 
         tab[size - 1] = malloc(sizeof(char) * 1); 
         tab[size - 1] = NULL;
         return (process(size, tab, str, charset)); 
 } 

unsigned int strlen_space(char *str)
{
    int i;

    i = 0;
    while (str[i] != ' ')
        i++;
    return (i);
}
  
char * ft_split_key(char *str)
{
    unsigned int len;
    unsigned int i;
    char * key;

    i = 0;
    len = strlen_space(str);
    key = (char *)malloc(sizeof(char) * len +1);
    while (str[i] != ' ' && str[i] != ':')
    {
        key[i] = str[i];
        i++;
    }
    return (key);
}

char    *ft_split_value(char *str)
{
    int i;
    char    *ret;

    while (*str >= '0' && *str <= '9')
        str++;
    while (*str == ' ')
        str++;
    if (*str != ':')
        return (NULL);
    else
        str++;
    while (*str == ' ')
        str++;
    i = 0;
    while (str[i] != '\0')
        i++;
    ret = (char *)malloc(sizeof(char) * i + 1);
    i = 0;
    while (*str != '\0')
    {
        ret[i] = *str;
        i++;
        str++;
    }
    ret[i] = '\0';
    return (ret);
}

t_dict *create_element(char *str)
{
    t_dict *elem;

    elem = (t_dict *)malloc(sizeof(t_dict));
    elem->key = ft_split_key(str);
    elem->value = ft_split_value(str);
    elem->next = NULL;
    return (elem);
}

void    add_element(char *str, t_dict *elem)
{
    while (elem->next != NULL)
        elem = elem->next;
    elem->next = create_element(str);
}

char    *rev_str(char *str)
{
	unsigned int	i;
        unsigned int     j;
	char	tmp;

	i = 0;
        j = 0;
        while (str[j] != 0)
                j++;
	while (i <= (j / 2))
	{
		tmp = str[i];
		str[i] = str[j - i - 1];
		str[j - i - 1] = tmp;
		i++;
	}
        return (str);
}


/* t_triple *create_number(char *str)
{
    t_triple *elem;

    elem = (t_triple *)malloc(sizeof(t_triple));
    elem->unit = ;
    elem->ten = ;
    elem->hundred = ;
    elem->next = NULL;
    return (elem);
}

void    add_number(char *str, t_triple *elem)
{
    while (elem->next != NULL)
        elem = elem->next;
    elem->next = create_number(str);
} */

 // int main() 