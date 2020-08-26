#include <stdio.h>
#include <unistd.h>

int ft_any(char **tab, int(*f)(char*));


int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}




int numtest (char *str)
{
	if (ft_strlen(str) >= 20)
	{
		return(1);
	}
	return(0);
}


int main(void)
{

	char *tab[] = 
	{
		"asd",
		"asdqwe",
		"asdqwei",
		"asdqwe",
		"foijsf"
	};
	tab[4] = 0;


	printf("%i", ft_any(tab, &numtest));


}


