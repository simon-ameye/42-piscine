#include <stdio.h>
int ft_atoi_base(char *str, char *base);

int main (void)
{
	int res;
	char str[]= "    --+2147483647";
	char base[] = "0123456789";
	
	res = ft_atoi_base(str, base);
	printf("%d", res);
}

// AJOUTER LES WHITESPACES !!
