#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char str[3];
	int i;
	
	str[0] = 'r';
	str[1] = '*';
	i = ft_strlen(&(str[0]));

	printf("%s\n", str);
	printf("%i\n",i);

}
