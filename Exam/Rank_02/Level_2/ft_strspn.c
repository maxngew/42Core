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