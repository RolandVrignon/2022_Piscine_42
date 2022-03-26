#include "utils.h"

int     main(int argc, char ** argv)
{
    (void)argc;
    (void)argv;
    
    int fd;
    char read_buffer[1000];
    char **lines;
    int i;
    t_dict *dict;

    fd = open("numbers.dict", O_RDONLY);
    if (fd != -1 && argc)
    {
        int read_dict = read(fd, read_buffer, 1000);
        close(fd);
        lines = ft_split(read_buffer, "\n");
        printf("len : %d\n", read_dict);
        i = 0;
        dict = create_element(lines[i]);
        i++;
        while (lines[i] != NULL)
        {
            add_element(lines[i], dict);
            i++;
        }
        while (dict->next != NULL)
        {
            printf("key = %s\nvalue = %s\n", dict->key, dict->value);
            dict = dict->next;
        }
    }

}