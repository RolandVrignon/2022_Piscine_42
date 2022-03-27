#include "utils.h"

void ft_putchar(char c)
{
        write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
        int tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}

void ft_putstr(char *str)
{
        while (*str != '\0')
        {
                write(1, str, 1);
                str++;
        }
}

int ft_nblen(long nb)
{
    int size = 0;
    if (nb < 0)
    {
        nb *= -1;
        size++;
    }
    while (nb > 0)
    {
        nb /= 10;
        size++;
    }
    return (size);
}

char *ft_itoa(int nbr)
{
    long nb = nbr;
    int i;
    i = ft_nblen(nb);
    char *tab;
    tab = malloc(sizeof(char) * (i + 1));
    if (!tab)
        return (NULL);
    tab[i] = '\0';
    i--;
    if (nb == 0)
    {
        tab[0] = '0';
        return (tab);
    }
    if (nb < 0)
    {
        nb *= -1;
        tab[0] = '-';
    }
    while (nb > 0)
    {
        tab[i] = '0' + (nb % 10);
        nb /= 10;
        i--;
    }
    return (tab);
}

int ft_strlen(char *str)
{
        int strlen;

        strlen = 0;
        while (*str != '\0')
        {
                strlen++;
                str++;
        }
        return (strlen);
}

int ft_strcmp(char *s1, char *s2)
{
        int i;

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

int ft_atoi(char *str)
{
        int i;
        int nb;

        i = 0;
        nb = 0;
        while (str[i] >= '0' && str[i] <= '9')
        {
                nb = nb * 10 + (str[i] - '0');
                i++;
        }
        return (nb);
}

int ft_iterative_power(int nb, int power)
{
        int r;

        r = 1;
        if (!(power >= 0))
                return (0);
        else if (power == 0)
                return (1);
        else if (nb == 0 && power == 0)
                return (1);
        else
        {
                while (power > 0)
                {
                        r = r * nb;
                        power--;
                }
                return (r);
        }
}

int ft_check_base(char *base)
{
        int i;
        int j;

        i = 0;
        while (base[i] != '\0')
        {
                if (base[i] == '+' || base[i] == '-' || ft_strlen(base) <= 1)
                        return (0);
                j = i + 1;
                while (base[j] != '\0')
                {
                        if (base[i] == base[j])
                                return (0);
                        j++;
                }
                i++;
        }
        return (1);
}

void ft_putnbr_base(int nb, char *base)
{
        int base_count;

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

int x(char c, char *charset)
{
        int i;

        i = 0;
        while (charset[i] != '\0')
        {
                if (charset[i] == c)
                        return (1);
                i++;
        }
        return (0);
}

int how_many_str(char *str, char *charset)
{
        int i;
        int nb;

        i = 0;
        nb = 0;
        if (!x(str[0], charset))
                nb = nb + 1;
        while (str[i] != '\0')
        {
                if (x(str[i], charset) && !x(str[i + 1], charset) && str[i + 1] != '\0')
                        nb = nb + 1;
                i++;
        }
        return (nb + 1);
}

void fill_tab(int index, int last_index, char *tab, char *str)
{
        int i;

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

char **process(int size, char **tab, char *s, char *ch)
{
        int st[2];
        int i;
        int j;

        j = -1;
        i = -1;
        while (i++ < size - 2)
        {
                st[0] = -1;
                while (s[++j] != '\0')
                {
                        if (!x(s[j], ch) && (x(s[j - 1], ch) || j == 0))
                                st[0] = j;
                        if ((x(s[j], ch) && !x(s[j - 1], ch) && st[0] != -1) || (st[0] != -1 && s[j + 1] == '\0'))
                                st[1] = j + 1;
                        if (st[0] != -1 && st[1] > st[0])
                        {
                                tab[i] = malloc(sizeof(char) * ((st[1] - st[0]) + 1));
                                fill_tab(st[0], st[1], tab[i], s);
                                break;
                        }
                }
        }
        return (tab);
}

char **ft_split(char *str, char *charset)
{
        char **tab;
        int size;

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

char *ft_split_key(char *str)
{
        unsigned int len;
        unsigned int i;
        char *key;

        i = 0;
        len = strlen_space(str);
        key = (char *)malloc(sizeof(char) * len + 1);
        while (str[i] != ' ' && str[i] != ':')
        {
                key[i] = str[i];
                i++;
        }
        return (key);
}

char *ft_split_value(char *str)
{
        int i;
        char *ret;

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

t_dict *create_element(char *str, t_dict *tmp)
{
        t_dict *elem;

        elem = (t_dict *)malloc(sizeof(t_dict));
        elem->key = ft_split_key(str);
        elem->value = ft_split_value(str);
        elem->next = NULL;
        elem->previous = tmp;
        return (elem);
}

void add_element(char *str, t_dict *elem)
{
        t_dict *tmp;

        while (elem->next != NULL)
                elem = elem->next;
        tmp = elem;
        elem->next = create_element(str, tmp);
}

char *rev_str(char *str)
{
        unsigned int i;
        unsigned int j;
        char tmp;

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

t_dict *create_list(int ac)
{
        t_dict *dict;
        int fd;
        char read_buffer[1000];
        char **lines;
        int i;

        fd = open("numbers.dict", O_RDONLY);

        if (fd != -1 && ac)
        {
                read(fd, read_buffer, 1000);
                close(fd);
                lines = ft_split(read_buffer, "\n");
                i = 0;
                dict = create_element(lines[i], 0);
                while (lines[i] != NULL)
                {
                        add_element(lines[i], dict);
                        i++;
                }
        }
        return (dict);
}

t_dict *go_to(t_dict *dict, int int_search)
{
        char *search;

        search = ft_itoa(int_search);

        while (ft_strcmp(search, dict->key) != 0 && dict->next != NULL)
                dict = dict->next;

        if (ft_strcmp(search, dict->key) == 0)
                return (dict);

        while (ft_strcmp(search, dict->key) != 0)
                dict = dict->previous;

        return (dict);
}

char *ft_substr(char *str, int pos, int len)
{
        int i;
        char *tmp;

        tmp = (char *)malloc(sizeof(char) * len);
        i = 0;

        while (i < len)
        {
                tmp[i] = str[i + pos];
                i++;
        }
        return (tmp);
}

char **triple_tab(char *str)
{
        int i;
        int j;
        int len;
        int modulo;
        char **tab;
        i = 0;

        while (str[i] != '\0')
                i++;

        len = i / 3;
        modulo = i % 3;

        printf("\ndiviser = %d , modulo = %d\n\n", len, modulo);

        if (modulo != 0)
                tab = malloc(sizeof(char) * (len + 1));
        else
                tab = malloc(sizeof(char) * (len + 2));

        if (!tab)
                return (0);

        i = 0;
        j = 0;

        if (modulo != 0)
        {
                tab[0] = ft_substr(str, i, modulo);
                j++;
                i = modulo;
        }

        while (len > 0)
        {
                tab[j] = ft_substr(str, i, 3);
                j++;
                i += 3;
                len--;
        }

        tab[j] = malloc(sizeof(char) * 1);
        tab[j] = 0;

        return (tab);
}

void print_number(char *nbr, t_dict *dict)
{
        (void)dict;
        int nb;
        int hundred = 0;
        int dizaine = 0;
        int units = 0;

        nb = ft_atoi(nbr);

        if (nb / 100 > 0)
        {
                hundred = nb / 100;
                nb = nb % (hundred * 100);
        }
        else
                hundred = 0;
        if (nb / 10 > 1)
        {
                dizaine = (nb / 10) * 10;
                nb = nb % dizaine;
        }
        else
                dizaine = 0;
        if (nb > 0)
                units = nb;
        else
                units = 0;

        // printf("Hundred : %d || Dizaines : %d || units : %d\n\n", hundred, dizaine, units);

        if (hundred != 0)
        {
                dict = go_to(dict, hundred);
                printf("%s ", dict->value);
                dict = go_to(dict, 100);
                printf("%s ", dict->value);
        }
        if(dizaine != 0)
        {
                dict = go_to(dict, dizaine);
                printf("%s ", dict->value);
        }
        if(units != 0)
        {
                dict = go_to(dict, units);
                printf("%s.", dict->value);
        }
}
