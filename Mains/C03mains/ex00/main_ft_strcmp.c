#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char string1[20];
    char string2[20];
    strcpy(string1, "SQQQQQQQQQQQjh");
    strcpy(string2, "SQQQQQQQQhj");

	char test1 [] = "\127";
	char test2 [] = "";

    printf("%d\n", strcmp(test1, test2));
	printf("%d\n", ft_strcmp(test1, test2));

    return(0);
}
