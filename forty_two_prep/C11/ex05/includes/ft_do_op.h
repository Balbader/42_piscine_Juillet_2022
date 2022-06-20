#ifndef FT_DO_OP_H
#define FT_DO_OP_H
#include <unistd.h>

void    ft_putnbr(int nbr);
void    ft_do_op(int a, int b, char *ope);
void    ft_putchar(char c);
int     ft_atoi(char *str);
int     ft_is_op(char *str);

void    ft_add(int a, int b);
void    ft_sub(int a, int b);
void    ft_div(int a, int b);
void    ft_mod(int a, int b);
void    ft_mult(int a, int b);

#endif
