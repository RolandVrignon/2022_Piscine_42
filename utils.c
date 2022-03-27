#include "utils.h"

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

        if (hundred != 0)
        {
                dict = go_to(dict, hundred);
                print_element(dict->value);
                dict = go_to(dict, 100);
                print_element(dict->value);
        }
        if(dizaine != 0)
        {
                dict = go_to(dict, dizaine);
                print_element(dict->value);
        }
        if(units != 0)
        {
                dict = go_to(dict, units);
                print_element(dict->value);
        }
        if(!hundred && !dizaine && !units)
                return ;
}

void print_tab(t_dict *dict, char **tab)
{
    int size = 0;
    int i = 0;
    int power = 0;
    t_dict *p_dict;

    while (tab[size])
        size++;

    while (i < size)
    {
        print_number(tab[i], dict);
        power = ((size - 1) - i) * 3;
        if (power != 0 && strcmp(tab[i], "000") != 0)
        {
            char test[power + 2];

            int k = 0;
            while (power + 1 > 0)
            {
                if (k == 0)
                    test[0] = '1';
                else
                    test[k] = '0';
                k++;
                power--;
            }
            test[k] = '\0';

            p_dict = dict;
            while (ft_strcmp(test, p_dict->key) != 0 && p_dict->next != NULL)
                p_dict = p_dict->next;

            print_element(p_dict->value);
        }
        i++;
    }
}