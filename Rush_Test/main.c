#include "utils.h"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    t_dict *dict;

    dict = create_list(ac);

    while (dict)
    {
        printf("key : %s\ncurrent : %p ||next : %p || previous : %p\n", dict->key, dict, dict->value, dict->previous);
        dict = dict->next;
    }
}