unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char src[] = "YOOOOO salut les gars comment cavva ??";
	char dest[100];
	char dest2[100];
	int i;

	i = ft_strlcpy(&dest[0], &src[0], 50);
	printf("%i\n%s\n\n",i,dest);
	i = strlcpy(&dest2[0], &src[0], 50);
	printf("%i\n\n%s\n",i,dest2);

}
