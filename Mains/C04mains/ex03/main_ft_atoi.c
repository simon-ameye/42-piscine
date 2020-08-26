#include <stdlib.h>
#include <stdio.h>
int ft_atoi(char *str);

int main (void)
{
	char str[] ="    \n\n\n  \t\f\r\v\t\n  --++-2147483648";	
	int a;
	int b;
	a = atoi(str);
	b = ft_atoi(str);
	printf("%i\n", a);
	printf("%i\n", b);

}
