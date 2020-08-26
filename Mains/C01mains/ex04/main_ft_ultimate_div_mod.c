#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a = 5;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);

}
// gcc -Wall -Wextra -Werror ft_putnbr.c
