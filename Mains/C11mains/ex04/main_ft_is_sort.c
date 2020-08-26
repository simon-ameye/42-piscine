int ft_is_sort(int *tab, int length, int(*f)(int, int));

#include <stdio.h>

int inf(int i, int j)
{
	printf("%i, %i\n", i, j);
	if (i > j)
		return(1);

	if (i < j)
		return(-1);
	return(0);
}


int main (void)
{
	int tab[] = {9,8,7,6,5,4,3,2,1};

	printf("EST CE QUE C TRIEEEEEEE ???????? %i\n", ft_is_sort(tab, 1, &inf));

}
