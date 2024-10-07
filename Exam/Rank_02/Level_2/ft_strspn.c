/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);

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

char	*ft_strchr(const char *s, int x)
{
	while (*s != '\0')
	{
		if (*s == x)
			return ((char *)s);
		s++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0')
	{
		if (ft_strchr(accept, s[x]) == 0)
			break ;
		x++;;
	}
	return (x);
}

#include <stdio.h>
int	main(void)
{
	const char *str1 = "hello, world!";
	const char *accept1 = "he";
	const char *accept2 = "hello";
	const char *accept3 = "xyz";
	const char *accept4 = "";
	const char *str2 = "12345abc";

	printf("ft_strspn(\"%s\", \"%s\") = %zu\n", str1, accept1, ft_strspn(str1, accept1));
	printf("ft_strspn(\"%s\", \"%s\") = %zu\n", str1, accept2, ft_strspn(str1, accept2));
	printf("ft_strspn(\"%s\", \"%s\") = %zu\n", str1, accept3, ft_strspn(str1, accept3));
	printf("ft_strspn(\"%s\", \"%s\") = %zu\n", str1, accept4, ft_strspn(str1, accept4));
	printf("ft_strspn(\"%s\", \"%s\") = %zu\n", str2, "12345", ft_strspn(str2, "12345"));
	printf("ft_strspn(\"%s\", \"%s\") = %zu\n", str2, "abc", ft_strspn(str2, "abc"));

	return 0;
}