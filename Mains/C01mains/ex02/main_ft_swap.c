#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 2;
	b = 4;
	ft_swap(&a,&b);
	printf("%i, %i",a,b);
}
