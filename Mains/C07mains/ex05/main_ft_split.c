#include <stdio.h>
char **ft_split(char *str, char *charset);

int main(int argc, char **argv)
{
	char **res;
	int i;

	(void)argc;
//	unsigned char t = 241;
//	argv[1] [5] = t;
//	argv[2] [5] = t;

	res = ft_split(argv[1], argv[2]);
	i = 0;
	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);

		i++;
	}
}
