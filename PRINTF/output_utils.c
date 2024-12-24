#include "_printf.h"

int    print_onechar(char c)
{
    write(1, &c, 1);
    return (1); 
}
