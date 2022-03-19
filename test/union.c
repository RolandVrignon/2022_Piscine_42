
#include <unistd.h>
#include <stdio.h>

int check_doublons(char *str, char c, int index)
{
    int x;

    x = 0;
    while (x < index)
    {
        if (str[x] == c)
            return (0);
        x++;
    }
    return (1);
}

char main(int ac, char **av)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (ac != 3)
        return (0);

    while (av[1][i])
    {
        if (check_doublons(av[1], av[1][i], i))
            write(1, &av[1][i], 1);
        i++;
    }
    while (av[2][j])
    {
        if(check_doublons(av[2], av[2][j], j))
        {
            if(check_doublons(av[1], av[2][j], i))
                write(1, &av[2][j], 1);
        }
        j++;
    }
    write (1, "\n", 1);
    return (0);
}