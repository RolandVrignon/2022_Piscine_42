#include "utils.h"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    
    if (ac != 2)
        return (0);

    t_dict *dict;
    char **tab;
    int size = 0;
    int i = 0;

    dict = create_list(ac);
    tab = triple_tab(av[1]);

    while (tab[size])
        size++;
    while (i < size)
    {
        print_number(tab[i], dict);
        i++;
    }
    
    // char fifty[] = "50";
    // dict = go_to(dict, fifty);
    // printf("Key : %s\nValue : %s\nPrevious : %p || Current : %p || Next : %p\n\n", dict->key, dict->value, dict->previous, dict, dict->next);

    // char b[] = "100";
    // dict = go_to(dict, b);
    // printf("Key : %s\nValue : %s\nPrevious : %p || Current : %p || Next : %p\n\n", dict->key, dict->value, dict->previous, dict, dict->next);


    // char c[] = "30";
    // dict = go_to(dict, c);
    // printf("Key : %s\nValue : %s\nPrevious : %p || Current : %p || Next : %p\n\n", dict->key, dict->value, dict->previous, dict, dict->next);

    

    // free(tab);
}