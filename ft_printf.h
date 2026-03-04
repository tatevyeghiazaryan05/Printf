#ifndef PRINTF_H
# define PRINTF_H                                                     
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int     ft_putchar_fd(char c, int fd);
int     ft_putstr(char *s);
int     ft_putnbr(int n);
int     ft_putunbr(unsigned int n);
int     ft_puthex(unsigned long n, char symbol);
int     ft_putptr(void *ptr);
#endif
