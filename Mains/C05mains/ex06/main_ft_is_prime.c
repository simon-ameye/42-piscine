#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb);

int main (int argc, char **argv)
{
	if (argc ==2)
		printf("%i", ft_is_prime(atoi(argv[1])));
}
