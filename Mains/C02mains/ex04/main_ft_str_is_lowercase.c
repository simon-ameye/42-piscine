#include <stdio.h>

int ft_str_is_lowercase(char *str);

int 	main(void)
{
	int res;

	char str[6] = {'p', 'g', 'u', 'r', '\0'};
	res = ft_str_is_lowercase(&str[0]);
	printf("%i",res);
}

