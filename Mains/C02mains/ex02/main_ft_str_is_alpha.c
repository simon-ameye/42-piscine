#include <stdio.h>

int ft_str_is_alpha(char *str);

int 	main(void)
{
	int res;

	char str[6] = {'z', 'j', 'a', 'Z', 'F'};
	res = ft_str_is_alpha(&str[0]);
	printf("%i",res);
}
