#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

// Personnal library
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * -1);
        return;
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

// Tab Init
int check_size(char *str)
{
    int i;
    int counter;
    int r;

    i = 0;
    counter = 0;
    while (str[i] != '\0')
    {
        if ('0' <= str[i] && str[i] <= '9')
            counter = counter + 1;
        i++;
    }

    r = 0;
    if (counter > INT_MAX || counter < 0)
        return (0);
    if (counter > 0)
    {
        while (r * r < counter)
            r++;
        if (!(r * r == counter))
            return (0);
        return (r);
    }
    return (0);
}

int **ft_conditions(char *str, int size)
{
    int **conditions;
    int i;
    int j;
    int nb;
    int counter;

    conditions = malloc(sizeof(int *) * 4);
    i = -1;
    while (i++ < size - 1)
        conditions[i] = malloc(sizeof(int) * size);

    i = 0;
    j = 0;
    counter = 0;
    while (str[i] != 0)
    {
        if (counter % size == 0 && counter > 0)
        {
            j = j + 1;
            counter = 0;
        }

        if ('0' <= str[i] && str[i] <= '9')
        {
            nb = str[i] - '0';
            conditions[j][counter] = nb;
            counter++;
        }
        i++;
    }
    return (conditions);
}

int **ft_init_tab(int size)
{
    int **tab;
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
    while (i++ < size - 1)
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
    write(1, "\n", 1);
}

// Checkk boundaries

int check_top(int **tab, int **conditions, int c, int size)
{
    int nb = conditions[0][c];
    int i;

    i = 0;
    if (conditions[0][c] == size)
    {
        while (size - 1 > 0)
        {
            if (tab[size - 1][c] != (size - 1 || 0))
                return (0);
            size--;
        }
    }
    if (conditions[0][c] == 1)
    {
        if (tab[0][c] != (size || 0))
            return (0);
    }
    return (1);
}

int check_bottom(int **tab, int **conditions, int c, int size)
{
    int nb;
    int i;
    int size_cp;

    size_cp = size;
    nb = conditions[1][c];
    i = 0;
    if (conditions[1][c] == size)
    {
        while (size_cp > 0)
        {
            if (tab[size - size_cp][c] != (size_cp || 0))
                return (0);
            size_cp--;
        }
    }
    if (conditions[0][c] == 1)
    {
        if (tab[0][c] != (size || 0))
            return (0);
    }
    return (1);
}

int check_left(int **tab, int **conditions, int r, int size)
{
    int nb = conditions[2][r];
    int i;

    i = 0;
    if (conditions[2][r] == size)
    {
        while (size - 1 > 0)
        {
            if (tab[size - 1][r] != (size - 1 || 0))
                return (0);
            size--;
        }
    }
    if (conditions[2][r] == 1)
    {
        if (tab[2][r] != (size || 0))
            return (0);
    }
    return (1);
}

int check_right(int **tab, int **conditions, int r, int size)
{
    int nb;
    int i;
    int size_cp;

    size_cp = size;
    nb = conditions[3][r];
    i = 0;
    if (conditions[3][r] == size)
    {
        while (size_cp > 0)
        {
            if (tab[size - size_cp][r] != (size_cp || 0))
                return (0);
            size_cp--;
        }
    }
    if (conditions[0][r] == 1)
    {
        if (tab[0][r] != (size || 0))
            return (0);
    }
    return (1);
}

int is_complete(int **tab, int size)
{    
    int i;
    int j;

    i = -1;
    while (i++ < size - 1)
    {
        j = -1;
        while (j++ < size - 1)
        {
            if (tab[i][j] == 0)
                return (0);
        }
    }
    return (1);
}

// Tab solve

int check_double(int **tab, int r, int c, int size)
{
    int i;
    int go;

    i = 0;
    go = 0;
    while (i < size - 1)
    {
        if (tab[i][c] == tab[r][c] && r != i)
            return (0);
        i++;
    }
    go = go + 1;
    i = 0;
    while (i < size - 1)
    {
        if (tab[r][i] == tab[r][c] && c != i)
            return (0);
        i++;
    }
    go = go + 1;
    if (go == 2)
        return (1);
    return (0);
}

int check_boundary_condition(int **tab, int **conditions)
{
    int size;
    int i;
    int j;

    size = (sizeof(tab[0]) / sizeof(tab[0][0])) * 2;
    i = -1;
    while (i++ < size - 1)
    {
        j = -1;
        while (j++ < size - 2)
        {
            if (tab[i][j] != 0 && check_top(tab, conditions, j, size) && check_bottom(tab, conditions, j, size) && check_left(tab, conditions, i, size) && check_right(tab, conditions, i, size))
                return (1);
        }
    }
    return (0);
}

int *ft_next(int r, int c, int size)
{
    int *tab;

    tab = malloc(sizeof(int) * 5);

    if (c < size - 1)
    {
        tab[0] = r;
        tab[1] = c + 1;
        return (tab);
    }
    else if (c == size - 1 && r != size - 1)
    {
        tab[0] = r + 1;
        tab[1] = 0;
        return (tab);
    }
    else
    {
        tab[0] = 0;
        tab[1] = 0;
        return (tab);
    }
}

void solve_tab(int **tab, int r, int c, int **conditions)
{
    int i;
    int * next;
    int next_r;
    int next_c;
    int size;

    size = (sizeof(tab[r]) / sizeof(tab[r][0])) * 2;

    i = 0;
    if (tab[r][c] == 0)
    {
        while (i++ < size)
        {
            tab[r][c] = i;
            if (check_double(tab, r, c, size))
            {
                if (is_complete(tab, size))
                {
                    ft_print_tab(tab, size);
                    return ;
                }
                else
                {
                    next = ft_next(r, c, size);
                    next_r = next[0];
                    next_c = next[1];
                    solve_tab(tab, next_r, next_c, conditions);
                }
            }
        }
    }
    else
    {
        if (is_complete(tab, size))
        {
            ft_print_tab(tab, size);
            return ;
        }
        else
        {
            next = ft_next(r, c, size);
            next_r = next[0];
            next_c = next[1];
            solve_tab(tab, next_r, next_c, conditions);
        }
    }
}

// Main

int main()
{
    int **tab;
    int **conditions;
    int size;
    char consign[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

    size = check_size(consign);

    if (!size)
        return (0);

    tab = ft_init_tab(size);
    conditions = ft_conditions(consign, size);

    solve_tab(tab, 0, 0, conditions);
    return (0);
}