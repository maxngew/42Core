/*
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	x = 0;

	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
		x++;
	return (s1[x] - s2[x]);
}

#include <stdio.h>
int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Hello!";
	char str4[] = "Hell";
	char str5[] = "Hella";
	char str6[] = "World";

	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str4, ft_strcmp(str1, str4));
	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str5, ft_strcmp(str1, str5));
	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str6, ft_strcmp(str1, str6));

	return (0);
}