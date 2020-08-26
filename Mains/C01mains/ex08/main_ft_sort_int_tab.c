#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int c[3];
	int d[6];
	int size;

	c[0] = 1;
	c[1] = 2;
	c[2] = -545122;

	d[0] = 1;
	d[1] = -455454;
	d[2] = 3;
	d[3] = 4000545;
	d[4] = -4000545;
	d[5] = 0;
	
	size = 3;
	ft_sort_int_tab(&c[0], size);
	printf("%i %i %i\n", c[0], c[1], c[2]);
	
	size = 6;
	ft_sort_int_tab(&d[0], size);
	printf("%i %i %i %i %i %i", d[0], d[1], d[2], d[3], d[4], d[5]);
}

