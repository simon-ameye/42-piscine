#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb);

int main (int argc, char **argv)
{
	if (argc ==2)
		printf("%i", ft_sqrt(atoi(argv[1])));
}
