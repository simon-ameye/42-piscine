#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		*pt_int;
	long	i;
	long	lmax;
	long	lmin;

	lmax = max;
	lmin = min;
	if (lmax <= lmin)
		return (NULL);
	if (!(pt_int = malloc(sizeof(*pt_int) * (lmax - lmin))))
		return (NULL);
	i = 0;
	while (lmin + i < lmax)
	{
		pt_int[i] = lmin + i;
		i++;
	}
	return (pt_int);
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_put2(int nb)
{
	return (nb/2);
}

int *ft_map(int *tab, int length, int(*f)(int));

int main(void)
{
	int *pt_map;
	int i = 0;

	pt_map = ft_map(ft_range(-20, 20), 40, &ft_put2);
	
	while (i <= 40 - 1)
	{
		printf("%i\n", pt_map[i]);
		i++;
	}


}
