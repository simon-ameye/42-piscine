#include <stdio.h>
#include <string.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}





char *ft_strdup(char *src);

int main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(ft_strdup(argv[1]));
	ft_putstr(strdup(argv[1]));

}
