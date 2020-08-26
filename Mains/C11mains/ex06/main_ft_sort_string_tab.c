#include <stdio.h>

void ft_sort_string_tab(char **tab);

int main (int argc, char **argv)
{
	int i = 0;

	argc--;
	argv++;
	argv[argc] = 0;
	i = 0;
	printf("AVANNNNNNNNNNNNT\n");
	printf("argc = %i\n\n", argc);
	while (i <= argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;

	}
	printf("\n\nARPEEEEEEEESSSS\n");
	ft_sort_string_tab(argv);
	i = 0;
	printf("argc = %i\n\n", argc);
	while (i <= argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;

	}	

}
