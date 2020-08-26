#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char dst1[200] = "qqqq";
	char dst2[200] = "qqqq";
	char src[] =  "www";
	int a;
	int b;


	a =    strlcat(dst1, src, 8);
	b = ft_strlcat(dst2, src, 8);
	printf("%s\n%i\n", dst1, a);
	printf("%s\n%i\n", dst2, b);


}
