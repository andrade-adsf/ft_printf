#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main()
{
	ft_printf(" %p %p \n", (void *)LONG_MIN, (void *)LONG_MAX);
	printf(" %p %p \n\n", (void *)LONG_MIN, (void *)LONG_MAX);
	ft_printf(" %p %p \n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
	printf(" %p %p \n\n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
}