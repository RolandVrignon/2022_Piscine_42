#include "utils.h"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    if (ac != 2)
        return (0);

    t_dict *dict;
    char **tab;

    dict = create_list(ac);
    tab = triple_tab(av[1]);
    print_tab(dict, tab);
}