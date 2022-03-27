#include "utils.h"

void print_number(char *nbr, int size, t_dict *dict)
{
    (void)size;
    (void)dict;
    int nb;
    int hundred = 0;
    int dizaine = 0;
    int units = 0;

    nb = ft_atoi(nbr);

    if(nb / 100 > 0)
    {
        hundred = nb / 100;
        nb = nb % (hundred * 100);
    }
    else
        hundred = 0;
    if(nb / 10 > 1)
    {
        dizaine = (nb / 10) * 10;
        nb = nb % dizaine;
    }
    else
        dizaine = 0;
    if(nb > 0)
        units = nb;
    else
        units = 0;

    printf("Hundred : %d || Dizaines : %d || units : %d\n\n", hundred, dizaine, units);

    // if(hundred != 0)
    // {
    //     dict = go_to(dict, search);
    //     printf("%s ", dict->value);
    //     char hundred[] = "100";
    //     dict = go_to(dict, hundred);
    //     printf("%s ", dict->value);
    // }
    // if(dizaine != 0)
    // {
    //     dict = go_to(dict, test);
    //     printf("%s ", dict->value);
    // }
    // if(units != 0)
    // {
    //     dict = go_to(dict, mama);
    //     printf("%s.", dict->value);
    // }
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    
    // int *test[] = "1425027";
    char **tab;
    tab = malloc(sizeof(char) * 2);
    tab[0] = "1";
    tab[1] = "425";
    tab[2] = "011";
    int size = 3;
    int i;
    i = 0;

    t_dict *dict;
    dict = create_list(ac);
    
    while (i < size)
    {
        print_number(tab[i], size, dict);
        i++;
    }
    
    char fifty[] = "50";
    dict = go_to(dict, fifty);
    printf("Key : %s\nValue : %s\nPrevious : %p || Current : %p || Next : %p\n\n", dict->key, dict->value, dict->previous, dict, dict->next);

    char b[] = "100";
    dict = go_to(dict, b);
    printf("Key : %s\nValue : %s\nPrevious : %p || Current : %p || Next : %p\n\n", dict->key, dict->value, dict->previous, dict, dict->next);


    char c[] = "30";
    dict = go_to(dict, c);
    printf("Key : %s\nValue : %s\nPrevious : %p || Current : %p || Next : %p\n\n", dict->key, dict->value, dict->previous, dict, dict->next);

    

    // free(tab);
}