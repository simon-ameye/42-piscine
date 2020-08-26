#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(int argc, char **argv)

{
	int *pt_int;
	int i;
	int min;
	int max;
	
	if (argc != 3)
		return (0);
	min = atoi(argv[1]);
	max = atoi(argv[2]);

	pt_int = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%i \n", pt_int[i]);
		i++;
	}
	printf("%p", pt_int);
	



}
