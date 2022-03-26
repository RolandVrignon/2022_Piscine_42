#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>

typedef struct dict
{
    char *key;
    char *value;
    struct dict *next;
} t_dict;

typedef struct s_triple
{
    char unit;
    char ten;
    char hundred;
    struct s_triple *next;
} t_triple;

typedef struct s_number
{
    struct s_triple     units[3];
    struct s_triple     thousands[3];
    struct s_triple     millions[3];
    struct s_triple     billions[3];
    struct s_triple     trillion[3];
    struct s_triple     quadrillion[3];
    struct s_triple     quintillion[3];
    struct s_triple     sextillion[3];
    struct s_triple     septillion[3];
    struct s_triple     octillion[3];
    struct s_triple     nonillion[3];
    struct s_triple     decillion[3];
    struct s_triple     undecillion[3];
} t_number;

void    add_element(char *str, t_dict *elem);

t_dict *create_element(char *str);

void    ft_putchar(char c);

void	ft_swap(int *a, int *b);

void	ft_putstr(char *str);

int	ft_strlen(char *str);

int	ft_strcmp(char *s1, char *s2);

int	ft_atoi(char *str);

int ft_check_base(char *base);

void ft_putnbr_base(int nb, char *base);
  
int x(char c, char *charset);

int how_many_str(char *str, char *charset);

void fill_tab(int index, int last_index, char *tab, char *str);

char **process(int size, char **tab, char *s, char *ch);

char **ft_split(char *str, char *charset);

char    *ft_split_value(char *str);

char * ft_split_key(char *str);

unsigned int strlen_space(char *str);

char    *rev_str(char *str);

 // { 
 //     char str[] = "d--dsjh-daslk-djlks-s"; 
 //     char charset[] = "-/|"; 
 //     char **tab; 
 //     tab = ft_split(str, charset); 
 //     int i = 0; 
 //     while (tab[i]) 
 //     { 
 //         printf("%d Adresse : %p : %s\n",i, tab[i], tab[i]); 
 //         i++; 
 //     } 
 //     return (0); 
 // }

#endif