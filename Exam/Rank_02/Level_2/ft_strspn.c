/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
*/

#include <string.h>

char	*ft_strchr(const char *s, int x)
{
	while (*s != '\0')
	{
		if (*s == x)
			return ((char *)s);
		++s;
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
		++x;
	}
	return (x);
}