#include "utils.h"



int     main(int argc, char ** argv)
{
    int i;
    int arg_len;


    i = 0;
    while (argv[1][i] != 0)
    {
        //if more than one argument or argument is not a number
        if (argc != 2 || !(argv[1][i] >= 48 && argv[1][i] <= 57))
        {
            write(1, "Error\n", 6);
            return(-1);
        }
        i++;
    }
    arg_len = i;
    //check if argument is higher than an unsigned int
    if (i > 10 || argv[1][i] > 4)
    {
        write(1, "Error\n", 6);
        return (-1);
    }
    else //Execute program
    {
        char *rev_argv = rev_str(argv[1]);
        printf("%s\n", rev_argv);
    }
}


/* typedef struct s_triple
{
    char unit;
    char ten;
    char hundred;
    struct s_triple *next;
    struct s_triple *prev;
} t_triple;
 */

/* char    *split_number(char **str, int i, int arg_len)
{
        int j;
        char *tmp;

        tmp = (char *)malloc(sizeof(char *) * i);
        j = 0;
        while (str[1][i] >= 0)
        {
            while (j % 3 != 0 && j <= arg_len)
            {
                tmp[]
                j++;
            }
        }
} */