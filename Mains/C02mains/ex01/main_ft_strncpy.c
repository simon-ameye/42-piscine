#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char tab[4];
	char dest[4];

	tab[0] = 'p';
	tab[1] = '$';
	tab[2] = '#';

	ft_strncpy(&dest[0], &tab[0], 8);
	printf("%s", dest);
}

