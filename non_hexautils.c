#include "ft_printf.h"

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int ft_putstr(char *str)
{
    if (str == NULL)
        return ft_putstr("(null)");
    int len = 0;
    while (str[len])
    {
        ft_putchar(str[len]);
        len++;
    }
    return len;
}


int ft_putnbr(int n)
{
    int count = 0;

    if (n == -2147483648)
    {
        ft_putstr("-2147483648");
        return 11;
    }
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
        count++;
    }
    if (n >= 10)
        count += ft_putnbr(n / 10);
    count += ft_putchar((n % 10) + '0');
    return count;
}

int ft_putuint(unsigned int num)
{
    char buffer[10];
    int count = 0;
    int i = 0;

    if (num == 0)
    {
        ft_putchar('0');
        return 1;
    }
    while (num > 0)
    {
        buffer[i++] = '0' + (num % 10);
        num /= 10;
    }
    while (--i >= 0)
        count += ft_putchar(buffer[i]);
    return count;
}


