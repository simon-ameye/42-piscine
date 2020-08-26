#include <stdio.h>

int ft_str_is_numeric(char *str);

int 	main(void)
{
	int res;

	char str[6] = {')', '2', '2', '5', '\0'};
	res = ft_str_is_numeric(&str[0]);
	printf("%i",res);
}
