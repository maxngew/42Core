/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);

DESCRIPTION
     The strpbrk() function locates in the null-terminated string
     s the first occurrence of any character in the string
     charset and returns a pointer to this character.  If no
     characters from charset occur anywhere in s strpbrk()
     returns NULL.
*/

#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	x;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		x = 0;
		while (s2[x])
		{
			if (*s1 == s2[x])
				return (char *)s1;
			x++;
		}
		s1++;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	const char *str1 = "Hello, World!";
	const char *set1 = "W";        // First matching char is 'W'
	const char *set2 = "o!";       // First matching char is 'o'
	const char *set3 = "xyz";      // No matching characters
	const char *set4 = "H";        // First matching char is 'H'
	const char *set5 = "";         // Empty set of characters to match

	char *result = ft_strpbrk(str1, set1);
	if (result)
		printf("First match of '%s' in \"%s\": '%c'\n", set1, str1, *result);
	else
		printf("No match found for '%s' in \"%s\"\n", set1, str1);

	result = ft_strpbrk(str1, set2);
	if (result)
		printf("First match of '%s' in \"%s\": '%c'\n", set2, str1, *result);
	else
		printf("No match found for '%s' in \"%s\"\n", set2, str1);

	result = ft_strpbrk(str1, set3);
	if (result)
		printf("First match of '%s' in \"%s\": '%c'\n", set3, str1, *result);
	else
		printf("No match found for '%s' in \"%s\"\n", set3, str1);

	result = ft_strpbrk(str1, set4);
	if (result)
		printf("First match of '%s' in \"%s\": '%c'\n", set4, str1, *result);
	else
		printf("No match found for '%s' in \"%s\"\n", set4, str1);

	result = ft_strpbrk(str1, set5);
	if (result)
		printf("First match of '%s' in \"%s\": '%c'\n", set5, str1, *result);
	else
		printf("No match found for '%s' in \"%s\"\n", set5, str1);

	return 0;
}