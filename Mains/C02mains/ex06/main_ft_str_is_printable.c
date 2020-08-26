#include <stdio.h>

int ft_str_is_printable(char *str);

int 	main(void)
{
	int res;

	char str[6] = {50, 32, 126, 49, 49};
	res = ft_str_is_printable(&str[0]);
	printf("%i\n%s",res, str);
}
