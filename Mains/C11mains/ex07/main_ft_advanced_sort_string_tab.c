#include <stdio.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

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
	ft_advanced_sort_string_tab(argv, &ft_strcmp);
	i = 0;
	printf("argc = %i\n\n", argc);
	while (i <= argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;

	}	

}
