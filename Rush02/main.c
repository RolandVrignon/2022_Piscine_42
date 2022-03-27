#include "utils.h"
#include "stdio.h"

char **set_triples(char *av)
{
    int i;
    int j;
    int h;
    char **tab;

    i = 0;
    while (av[i] != '\0')
        i++;

    if (i % 3 == 0)
        tab = malloc(sizeof(char) * (i / 3));
    else
        tab = malloc(sizeof(char) * ((i / 3) + 1));

    i = 0;
    j = 0;
    h = 0;
    while (tab[i])
    {
        tab[i] = malloc(sizeof(char) * 3);
        while (av[j] != '\0')
        {
            tab[i][h] = av[j];
            h++;
            j++;

            if ((j + 1) % 3 == 0)
                break;
        }
        i++;
    }
    return (tab);
}

int     main(int argc, char ** argv)
{
    (void)argc;
    (void)argv;
    
    int fd;
    char read_buffer[1000];
    char **lines;
    int i;
    t_dict *dict;
    char **triples;

    fd = open("numbers.dict", O_RDONLY);
    if (fd != -1 && argc)
    {
        read(fd, read_buffer, 1000);
        close(fd);
        lines = ft_split(read_buffer, "\n");
        i = 0;
        dict = create_element(lines[i]);
        i++;
        while (lines[i] != NULL)
        {
            add_element(lines[i], dict);
            i++;
        }
        
    }
}