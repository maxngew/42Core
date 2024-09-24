/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
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