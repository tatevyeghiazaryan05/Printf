#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
	int a = -42;
	unsigned int b = 42;
	char *s = "Some string";
	char ch = 'l';
	char *s_null = NULL;
	char *p_null = NULL;
	int res = ft_printf("%d %i %u %p %c %s %x %X %s %p\n",
		       	a, INT_MIN, b, &a, ch, s,b,b,s_null, p_null);
	int res1 = printf("%d %i %u %p %c %s %x %X %s %p\n", a,INT_MIN,b, &a, ch, s,b,b,s_null, p_null);
	printf("res: %d, res1:%d",res,res1);
}
