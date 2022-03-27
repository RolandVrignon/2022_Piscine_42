#include <stdlib.h>

typedef struct dict
{
    char key;
    char value;
    struct dict *next;
} t_dict;