#include <stdio.h>
#include <stdlib.h>

int ft_iterative_power(int nb, int power);

int main (int argc, char **argv)
{
	if (argc == 3)
		printf("%i", ft_iterative_power(  atoi(argv[1]), atoi(argv[2]) ));
}
