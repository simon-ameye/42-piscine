#include <stdio.h>
#include <stdlib.h>

int ft_find_next_prime(int nb);

int main (int argc, char **argv)
{
	if (argc ==2)
		printf("%i", ft_find_next_prime(atoi(argv[1])));
}
