#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(int argc, char **argv)

{
	int *pt_int;
	int **pt_pt_int;
	int i;
	int min;
	int max;
	int val;
	
	if (argc != 3)
		return (0);
	pt_pt_int = &pt_int;
	min = atoi(argv[1]);
	max = atoi(argv[2]);

	val = ft_ultimate_range(pt_pt_int , min, max);
	printf("val = %i\n", val);
	i = 0;
	while (i < max - min)
	{
		printf("\n%i ", pt_int[i]);
		i++;
	}
	printf("\n%p", pt_int);
	



}
