#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int nb);

int main (int argc, char **argv)
{
	if (argc != 0)
		printf("%i", ft_fibonacci(  atoi(argv[1])  ));
}
