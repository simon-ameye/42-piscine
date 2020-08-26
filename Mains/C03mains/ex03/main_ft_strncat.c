char *ft_strncat(char *dest, char *src, unsigned int nb);
#include <string.h>
#include <stdio.h>

int main (void)
{
	char str1[50];
	char str2[50];
	char *c1;
	char *c2;

   strcpy(str1, "yyy");
   strcpy(str2, "eeeeee");
   c1 = strncat(str1, str2, 50);
   printf("%s\n%s\n", str1, c1);

   strcpy(str1, "yyy");
   c2 = ft_strncat(str1, str2, 50);
   printf("%s\n%s\n", str1, c2);
   return(0);
}
