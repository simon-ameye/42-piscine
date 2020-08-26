#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char string1[20];
    char string2[20];
    strcpy(string1, "iiiij");
    strcpy(string2, "iiiij");
    printf("%d\n", strncmp(&string1[0], &string2[0], -2000));
	printf("%d\n", ft_strncmp(&string1[0], &string2[0], -2000));

    return(0);
}
