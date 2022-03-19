#include <unistd.h>

int check_double(char *s1, char *s2, unsigned int index, unsigned jndex)
{
    unsigned int i;
    unsigned int j;
    int go;

    go = 0;
    i = 0;
    while (s1[i])
    {
        if (s1[index] == s1[i] && index == i)
        {   go = go + 1;
            break;
        }
        else if (s1[index] == s1[i] && index != i)
            return (0);
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (s2[jndex] == s2[i] && jndex == i)
            go = go + 1;
        else if (s2[jndex] == s2[i] && jndex != i)
            return (0);
        i++;
    }
    if (go == 2)
        return (1);
    return (0);
}

void ft_inter(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
            if (s1[i] == s2[j] && check_double(s1, s2, i, j))
                write(1, &s1[i], 1);
            j++;
        }
        i++;
    }

}

int main (int ac, char **av)
{
    if (ac != 3)
        return (0);

    ft_inter(av[1], av[2]);
}