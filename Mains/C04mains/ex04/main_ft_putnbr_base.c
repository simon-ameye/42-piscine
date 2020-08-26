void ft_putnbr_base(int nbr, char *base);
#include <stdlib.h>

int main (int argc, char **argv)
{
	(void) argc;

	ft_putnbr_base(atoi(argv[1]), argv[2]);
}
