/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
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