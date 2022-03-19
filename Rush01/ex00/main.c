#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

// Personnal library
void	    ft_putchar(char c)
{
	write(1, &c, 1);
}

void	    ft_putnbr(int nb)
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

// Tab Init
int         check_size(char *str)
{
    int i;
    int counter;
    int r;

    i = 0;
    counter = 0;
    while (str[i] != '\0')
    {
        if('0' <= str[i] && str[i] <= '9')
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

int         **ft_conditions(char *str, int size)
{
    int    **conditions;
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
    while ( str[i] != 0)
    {
        if(counter % size == 0 && counter > 0)
        {
          j = j + 1;
          counter = 0;
        }

        if('0' <= str[i] && str[i] <= '9')
        {
            nb = str[i]-'0';
            conditions[j][counter] = nb;
            counter++;
        }
    i++;        
    }  
    return (conditions);
}

int         **ft_init_tab(int size)
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

void        ft_print_tab(int **tab, int size)
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

// Tab solve
// int         check_double(int **tab, int r, int c, int nbr)
// {
//     int i;
//     int go;

//     i = 0;
//     go = 0;
//     while ( i < size - 1)
//     {
//         if(tab[i][c] == tab[r][c] && r != i)
//             return (0);
//         i++;
//     }
//     go = go + 1;
//     i = 0;
//     while ( i < size - 1)
//     {
//         if(tab[r][i] == tab[r][c] && c != i)
//             return (0);
//         i++
//     }
//     go = go + 1;
//     if (go == 2)
//         return (1);
//     return (0);
// }

// int         check_boundary_condition(int **tab, )

// void        solve_tab(int **tab, int r, int c, int size)
// {
//     int i;
//     int next_r;
//     int next_c;
    
//     i = -1;
//     if (tab[r][c] == 0)
//     {
//         while( i++ < size - 1)
//         {
//             tab[r][c] = i;
//             if (check_double(tab, r, c, size) && check_boundary_condition(tab, condition))
//             {
//                 if(is_complete(tab))
//                     ft_print(tab, size);
//                 else
//                 {
//                     (next_r, next_c) = next(r, c);
//                     solve_tab(tab, next_r, next_c, size);
//                 }
//             } 
//         }
//     }
//     else
//     {
//         if(is_complete(tab))
//             ft_print(tab, size);
//         else
//         {
//             (next_r, next_c) = next(r, c);
//             solve_tab(tab, next_r, next_c, size);
//         }
//     }

// }

// Main

int         main()
{
    int **tab;
    int size;
    char consign[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

    size = check_size(consign);
    if (!size)
        return (0);
    printf("Taille du tableau : %d\n", size);
    tab = ft_init_tab(size);
    ft_print_tab(tab, size);
    return (0);
}