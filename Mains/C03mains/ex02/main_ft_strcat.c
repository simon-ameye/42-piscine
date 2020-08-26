#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main (void)
{
	char str1[50];
	char str2[50];
	char *c1;
	char *c2;

   strcpy(str1, "uu");
   strcpy(str2, "");
   c1 = strcat(str1, str2);
   printf("%s\n%s\n", str1, c1);

   strcpy(str1, "uu");
   c2 = ft_strcat(str1, str2);
   printf("%s\n%s\n", str1, c2);
   return(0);
}
