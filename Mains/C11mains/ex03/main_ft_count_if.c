#include <stdio.h>
#include <unistd.h>

int ft_count_if(char **tab, int length, int(*f)(char*));


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
		"asdqmnnnnnnnnnnnnnnwe",
		"asdqiopjdfgwrtrthsrtwrtei",
		"asdqw'pijrthrtghrthe",
		"foijsf"
	};


	printf("%i", ft_count_if(tab, 5, &numtest));


}


