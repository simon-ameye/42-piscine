#include <stdio.h>


char *ft_strjoin(int size, char **strs, char *sep);

int main (int argc, char**argv)
{
	char *pt_char;
	if (argc < 1)
	{
		printf("wrong number of arguments");
		return (0);
	}
	pt_char = ft_strjoin(argc, argv, "##");
	printf("%s\n%p\n", pt_char, pt_char);

}

