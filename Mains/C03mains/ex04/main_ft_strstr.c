char *ft_strstr(char *str, char *to_find);
#include <string.h>
#include <stdio.h>

int main (void)
{
	const char str1[] = "   \t\rq\n\t\f\r weasdasd";
	const char str2[] = "q\n\t\f\r we";
	
	char str11[] 		= "   \t\rq\n\t\f\r weasdasd";
	char str22[]      = "q\n\t\f\r we";
	
	char *c1;
	char *c2;

	
	c1 = strstr(str1, str2);
	printf("%s\n",c1); 
	c2 = ft_strstr(str11, str22);
	printf("%s\n", c2);
	return(0);
}
