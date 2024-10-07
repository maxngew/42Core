/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);

DESCRIPTION
     The strspn() function spans the initial part of the null-
     terminated string s as long as the characters from s occur
     in the null-terminated string charset.  In other words, it
     computes the string array index of the first character of s
     which is not in charset, else the index of the first null
     character.

     The strcspn() function spans the initial part of the null-
     terminated string s as long as the characters from s do not
     occur in the null-terminated string charset (it spans the
     complement of charset).  In other words, it computes the
     string array index of the first character of s which is also
     in charset, else the index of the first null character.

RETURN VALUES
     The strspn() and strcspn() functions return the number of
     characters spanned.
*/

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	x = 0;
	int	y = 0;

	while (s[x] != '\0')
	{
		while (reject[y] != '\0')
		{
			if (s[x] == reject[y])
				return (x);
			y++;
		}
		x++;
	}
	return (x);
}

#include <stdio.h>
int	main(void)
{
	const char *str1 = "Hello, World!";
	const char *reject1 = "W";
	const char *reject2 = "o!";
	const char *reject3 = "xyz";
	const char *reject4 = "H";
	const char *reject5 = "";

	printf("First occurrence of '%s' in \"%s\": %zu\n", reject1, str1, ft_strcspn(str1, reject1));
	printf("First occurrence of '%s' in \"%s\": %zu\n", reject2, str1, ft_strcspn(str1, reject2));
	printf("First occurrence of '%s' in \"%s\": %zu\n", reject3, str1, ft_strcspn(str1, reject3));
	printf("First occurrence of '%s' in \"%s\": %zu\n", reject4, str1, ft_strcspn(str1, reject4));
	printf("First occurrence of '%s' in \"%s\": %zu\n", reject5, str1, ft_strcspn(str1, reject5));

	return 0;
}