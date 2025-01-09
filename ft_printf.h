#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h> //to rem
#include <unistd.h>

//non hexa
int ft_printf(const char *, ...);
int ft_putstr(char *str);
int ft_putnbr(int n);
int ft_putchar(char c);
int ft_putuint(unsigned int num);
//hexa
int ft_putptr(void *ptr);
int ft_putx(unsigned int num);
int ft_putX(unsigned int num);

#endif