#include <stdio.h>
#include <stdlib.h>


char **ft_split(char *str, char *charset)
{
    int i;
    int j;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (charset[j] != '\0')
        {
            if(str[i] == charset[j])
            {
                i++;
            }
            j++;
        }
    }

}

int main()
{
    char str[] = "carnaval";
    char charset[] = "abc";
    
    ft_split(str, charset);
    return (0);
}e