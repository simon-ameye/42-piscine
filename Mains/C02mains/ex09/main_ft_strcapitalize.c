#include <stdio.h>

int ft_strcapitalize(char *str);

int 	main(void)
{
	char str[] = "Salut, cPPPmment      tu vas ? 42mots qua<rante-deux; ci[n]quante+et+un";
//Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
//Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un%
	ft_strcapitalize(&str[0]);
	printf("%s",str);
}
