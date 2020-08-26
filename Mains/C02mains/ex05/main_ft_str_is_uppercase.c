#include <stdio.h>

int ft_str_is_uppercase(char *str);

int 	main(void)
{
	int res;

	char str[6] = {'J', 'A', 'A', 'Z'};
	res = ft_str_is_uppercase(&str[0]);
	printf("%i",res);
}
