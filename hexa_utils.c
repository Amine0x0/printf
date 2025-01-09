#include "ft_printf.h"

int ft_putptr(void *ptr)
{
    unsigned long address;
    char hex_chars[] = "0123456789abcdef";
    char buffer[20];
    int count = 0;
    int i = 0;

    if (!ptr)
        return ft_putstr("0x0");
    address = (unsigned long)ptr;
    count += ft_putstr("0x");
    if (address == 0)
    {
        count += ft_putchar('0');
        return count;
    }
    while (address > 0)
    {
        buffer[i++] = hex_chars[address % 16];
        address /= 16;
    }
    while (--i >= 0)
        count += ft_putchar(buffer[i]);
    return count;
}


int ft_putx(unsigned int num)
{
    char hex_chars[] = "0123456789abcdef";
    char buffer[8];
    int count = 0;
    int i = 0;

    if (num == 0)
    {
        ft_putchar('0');
        return 1;
    }
    while (num > 0)
    {
        buffer[i++] = hex_chars[num % 16];
        num /= 16;
    }
    while (--i >= 0)
        count += ft_putchar(buffer[i]);
    return count;
}

int ft_putX(unsigned int num)
{
    char hex_chars[] = "0123456789ABCDEF";
    char buffer[8];
    int count = 0;
    int i = 0;

    if (num == 0)
    {
        ft_putchar('0');
        return 1;
    }
    while (num > 0)
    {
        buffer[i++] = hex_chars[num % 16];
        num /= 16;
    }
    while (--i >= 0)
        count += ft_putchar(buffer[i]);
    return count;
}
