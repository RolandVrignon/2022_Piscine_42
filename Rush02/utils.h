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
    struct dict *previous;
} t_dict;

typedef struct s_triple
{
    char unit;
    char ten;
    char hundred;
    struct s_triple *next;
} t_triple;

void    add_element(char *str, t_dict *elem);

t_dict *create_element(char *str, t_dict *tmp);

void    ft_putchar(char c);

void	ft_swap(int *a, int *b);

int ft_nblen(long nb);

char *ft_itoa(int nbr);

void	ft_putstr(char *str);

int	ft_strlen(char *str);

int	ft_strcmp(char *s1, char *s2);

int	ft_iterative_power(int nb, int power);

int	ft_atoi(char *str);

int ft_check_base(char *base);

void ft_putnbr_base(int nb, char *base);
  
int x(char c, char *charset);

int how_many_str(char *str, char *charset);

void fill_tab(int index, int last_index, char *tab, char *str);

char **process(int size, char **tab, char *s, char *ch);

char **ft_split(char *str, char *charset);

char    *ft_split_value(char *str);

char *ft_split_key(char *str);

unsigned int strlen_space(char *str);

char    *rev_str(char *str);

t_dict *create_list(int ac);

t_dict    *go_to(t_dict *dict, int int_search);

char **maketab(char *number);

char    *ft_substr(char *str, int pos, int len);

char **triple_tab(char *str);

void print_number(char *nbr, t_dict *dict);

void print_tab(t_dict *dict, char **tab);

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