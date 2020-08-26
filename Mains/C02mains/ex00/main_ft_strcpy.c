#include <stdio.h>
#include <string.h>


char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[50] = "";
	char dest[50];

	printf("%s\n", ft_strcpy(&dest[0], &src[0]));
	printf("%s\n", strcpy(&dest[0], &src[0]));
}
