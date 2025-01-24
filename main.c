#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int count1 = printf("%w\n");
	int count2 = ft_printf("%w\n");

	printf("theirs -> %d\n", count1);
	printf("mine -> %d\n", count2);
	return (0);
}
