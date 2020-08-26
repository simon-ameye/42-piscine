#include <stdio.h>

int ft_strlowcase(char *str);

int 	main(void)
{
	char str[6] = {'A', 'Z', 'k', '{'};
	ft_strlowcase(&str[0]);
	printf("%s",str);
}
