#include <stdio.h>

int ft_strupcase(char *str);

int 	main(void)
{
	char str[6] = {'a', 'z', 'j', '{'};
	ft_strupcase(&str[0]);
	printf("%s",str);
}
