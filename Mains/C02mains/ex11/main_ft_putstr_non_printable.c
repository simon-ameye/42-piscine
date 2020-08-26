#include <stdio.h>

void ft_putstr_non_printable(char *str);

int 	main(void)
{
	char str[] = "Coucou\ntu vas bien ?Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Unt \a \r\ff?";
	unsigned char t = 242;
	int i = 0;
	str[2] = t;

	while (str[i] != '\0')
	{
		printf("%d ", str[i]);
		i++;
	}

	ft_putstr_non_printable(&str[0]);


}
