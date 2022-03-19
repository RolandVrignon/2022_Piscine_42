#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
		return ;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int    **ft_init_tab(int size)
{
    int    **tab;
    int i;
    int j;

    tab = malloc(sizeof(int *) * size);
    i = -1;
    while (i++ < size - 1)
        tab[i] = malloc(sizeof(int) * size);

    i = -1;
    while (i++ < size - 1)
    {
        j = -1;
        while (j++ < size - 1)
        {
            tab[i][j] = 0;
        }
    }
    
    return (tab);
    
}

void ft_print_tab(int **tab, int size)
{
    int i;
    int j;

    i = -1;
    while(i++ < size - 1)
    {
        j = -1;
        while (j++ < size - 2)
        {
            ft_putnbr(tab[i][j]);
            write(1, " ", 1);
        }
        ft_putnbr(tab[i][j]);
        write(1, "\n", 1);
    }
}

int main()
{
    int **tab;
    int size;


    size = 3;
    tab = ft_init_tab(size);
    ft_print_tab(tab, size);
    return (0);
}